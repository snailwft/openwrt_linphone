/*
 *  Diffie-Hellman-Merkle key exchange (prime generation)
 *
 *  Copyright (C) 2006-2015, ARM Limited, All Rights Reserved
 *
 *  This file is part of mbed TLS (https://polarssl.org)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE 1
#endif

#include <stdio.h>
#include <stdlib.h>

#include "polarssl/config.h"

#include "polarssl/bignum.h"
#include "polarssl/entropy.h"
#include "polarssl/ctr_drbg.h"

#define USAGE \
    "\n usage: dh_genprime param=<>...\n"                                   \
    "\n acceprable parameters:\n"                                           \
    "    bits=%%d           default: 2048\n"

#define DFL_BITS    2048

/*
 * Note: G = 4 is always a quadratic residue mod P,
 * so it is a generator of order Q (with P = 2*Q+1).
 */
#define GENERATOR "4"

#if !defined(POLARSSL_BIGNUM_C) || !defined(POLARSSL_ENTROPY_C) ||   \
    !defined(POLARSSL_FS_IO) || !defined(POLARSSL_CTR_DRBG_C)
int main( int argc, char *argv[] )
{
    ((void) argc);
    ((void) argv);

    printf("POLARSSL_BIGNUM_C and/or POLARSSL_ENTROPY_C and/or "
           "POLARSSL_FS_IO and/or POLARSSL_CTR_DRBG_C not defined.\n");
    return( 0 );
}
#else
int main( int argc, char *argv[] )
{
    int ret = 1;

#if defined(POLARSSL_GENPRIME)
    mpi G, P, Q;
    entropy_context entropy;
    ctr_drbg_context ctr_drbg;
    const char *pers = "dh_genprime";
    FILE *fout;
    int nbits = DFL_BITS;
    int i;
    char *p, *q;

    mpi_init( &G ); mpi_init( &P ); mpi_init( &Q );
    entropy_init( &entropy );

    if( argc == 0 )
    {
    usage:
        printf( USAGE );
        return( 1 );
    }

    for( i = 1; i < argc; i++ )
    {
        p = argv[i];
        if( ( q = strchr( p, '=' ) ) == NULL )
            goto usage;
        *q++ = '\0';

        if( strcmp( p, "bits" ) == 0 )
        {
            nbits = atoi( q );
            if( nbits < 0 || nbits > POLARSSL_MPI_MAX_BITS )
                goto usage;
        }
        else
            goto usage;
    }

    if( ( ret = mpi_read_string( &G, 10, GENERATOR ) ) != 0 )
    {
        printf( " failed\n  ! mpi_read_string returned %d\n", ret );
        goto exit;
    }

    printf( "\n  . Seeding the random number generator..." );
    fflush( stdout );

    if( ( ret = ctr_drbg_init( &ctr_drbg, entropy_func, &entropy,
                               (const unsigned char *) pers,
                               strlen( pers ) ) ) != 0 )
    {
        printf( " failed\n  ! ctr_drbg_init returned %d\n", ret );
        goto exit;
    }

    printf( " ok\n  . Generating the modulus, please wait..." );
    fflush( stdout );

    /*
     * This can take a long time...
     */
    if( ( ret = mpi_gen_prime( &P, nbits, 1,
                               ctr_drbg_random, &ctr_drbg ) ) != 0 )
    {
        printf( " failed\n  ! mpi_gen_prime returned %d\n\n", ret );
        goto exit;
    }

    printf( " ok\n  . Verifying that Q = (P-1)/2 is prime..." );
    fflush( stdout );

    if( ( ret = mpi_sub_int( &Q, &P, 1 ) ) != 0 )
    {
        printf( " failed\n  ! mpi_sub_int returned %d\n\n", ret );
        goto exit;
    }

    if( ( ret = mpi_div_int( &Q, NULL, &Q, 2 ) ) != 0 )
    {
        printf( " failed\n  ! mpi_div_int returned %d\n\n", ret );
        goto exit;
    }

    if( ( ret = mpi_is_prime( &Q, ctr_drbg_random, &ctr_drbg ) ) != 0 )
    {
        printf( " failed\n  ! mpi_is_prime returned %d\n\n", ret );
        goto exit;
    }

    printf( " ok\n  . Exporting the value in dh_prime.txt..." );
    fflush( stdout );

    if( ( fout = fopen( "dh_prime.txt", "wb+" ) ) == NULL )
    {
        ret = 1;
        printf( " failed\n  ! Could not create dh_prime.txt\n\n" );
        goto exit;
    }

    if( ( ret = mpi_write_file( "P = ", &P, 16, fout ) != 0 ) ||
        ( ret = mpi_write_file( "G = ", &G, 16, fout ) != 0 ) )
    {
        printf( " failed\n  ! mpi_write_file returned %d\n\n", ret );
        goto exit;
    }

    printf( " ok\n\n" );
    fclose( fout );

exit:

    mpi_free( &G ); mpi_free( &P ); mpi_free( &Q );
#else
    printf( "\n  ! Prime-number generation is not available.\n\n" );
#endif

#if defined(_WIN32)
    printf( "  Press Enter to exit this program.\n" );
    fflush( stdout ); getchar();
#endif

    return( ret );
}
#endif /* POLARSSL_BIGNUM_C && POLARSSL_ENTROPY_C && POLARSSL_FS_IO &&
          POLARSSL_CTR_DRBG_C */
