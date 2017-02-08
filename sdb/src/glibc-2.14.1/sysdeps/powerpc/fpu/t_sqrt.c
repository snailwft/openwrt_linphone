const float __t_sqrt[1024] = {
0.7078,0.7064, 0.7092,0.7050, 0.7106,0.7037, 0.7119,0.7023, 0.7133,0.7010,
0.7147,0.6996, 0.7160,0.6983, 0.7174,0.6970, 0.7187,0.6957, 0.7201,0.6943,
0.7215,0.6930, 0.7228,0.6917, 0.7242,0.6905, 0.7255,0.6892, 0.7269,0.6879,
0.7282,0.6866, 0.7295,0.6854, 0.7309,0.6841, 0.7322,0.6829, 0.7335,0.6816,
0.7349,0.6804, 0.7362,0.6792, 0.7375,0.6779, 0.7388,0.6767, 0.7402,0.6755,
0.7415,0.6743, 0.7428,0.6731, 0.7441,0.6719, 0.7454,0.6708, 0.7467,0.6696,
0.7480,0.6684, 0.7493,0.6672, 0.7507,0.6661, 0.7520,0.6649, 0.7532,0.6638,
0.7545,0.6627, 0.7558,0.6615, 0.7571,0.6604, 0.7584,0.6593, 0.7597,0.6582,
0.7610,0.6570, 0.7623,0.6559, 0.7635,0.6548, 0.7648,0.6537, 0.7661,0.6527,
0.7674,0.6516, 0.7686,0.6505, 0.7699,0.6494, 0.7712,0.6484, 0.7725,0.6473,
0.7737,0.6462, 0.7750,0.6452, 0.7762,0.6441, 0.7775,0.6431, 0.7787,0.6421,
0.7800,0.6410, 0.7812,0.6400, 0.7825,0.6390, 0.7837,0.6380, 0.7850,0.6370,
0.7862,0.6359, 0.7875,0.6349, 0.7887,0.6339, 0.7900,0.6330, 0.7912,0.6320,
0.7924,0.6310, 0.7937,0.6300, 0.7949,0.6290, 0.7961,0.6281, 0.7973,0.6271,
0.7986,0.6261, 0.7998,0.6252, 0.8010,0.6242, 0.8022,0.6233, 0.8034,0.6223,
0.8046,0.6214, 0.8059,0.6205, 0.8071,0.6195, 0.8083,0.6186, 0.8095,0.6177,
0.8107,0.6168, 0.8119,0.6158, 0.8131,0.6149, 0.8143,0.6140, 0.8155,0.6131,
0.8167,0.6122, 0.8179,0.6113, 0.8191,0.6104, 0.8203,0.6096, 0.8215,0.6087,
0.8227,0.6078, 0.8238,0.6069, 0.8250,0.6060, 0.8262,0.6052, 0.8274,0.6043,
0.8286,0.6035, 0.8297,0.6026, 0.8309,0.6017, 0.8321,0.6009, 0.8333,0.6000,
0.8344,0.5992, 0.8356,0.5984, 0.8368,0.5975, 0.8379,0.5967, 0.8391,0.5959,
0.8403,0.5950, 0.8414,0.5942, 0.8426,0.5934, 0.8437,0.5926, 0.8449,0.5918,
0.8461,0.5910, 0.8472,0.5902, 0.8484,0.5894, 0.8495,0.5886, 0.8507,0.5878,
0.8518,0.5870, 0.8530,0.5862, 0.8541,0.5854, 0.8552,0.5846, 0.8564,0.5838,
0.8575,0.5831, 0.8587,0.5823, 0.8598,0.5815, 0.8609,0.5808, 0.8621,0.5800,
0.8632,0.5792, 0.8643,0.5785, 0.8655,0.5777, 0.8666,0.5770, 0.8677,0.5762,
0.8688,0.5755, 0.8700,0.5747, 0.8711,0.5740, 0.8722,0.5733, 0.8733,0.5725,
0.8744,0.5718, 0.8756,0.5711, 0.8767,0.5703, 0.8778,0.5696, 0.8789,0.5689,
0.8800,0.5682, 0.8811,0.5675, 0.8822,0.5667, 0.8833,0.5660, 0.8844,0.5653,
0.8855,0.5646, 0.8866,0.5639, 0.8877,0.5632, 0.8888,0.5625, 0.8899,0.5618,
0.8910,0.5611, 0.8921,0.5605, 0.8932,0.5598, 0.8943,0.5591, 0.8954,0.5584,
0.8965,0.5577, 0.8976,0.5570, 0.8987,0.5564, 0.8998,0.5557, 0.9008,0.5550,
0.9019,0.5544, 0.9030,0.5537, 0.9041,0.5530, 0.9052,0.5524, 0.9062,0.5517,
0.9073,0.5511, 0.9084,0.5504, 0.9095,0.5498, 0.9105,0.5491, 0.9116,0.5485,
0.9127,0.5478, 0.9138,0.5472, 0.9148,0.5465, 0.9159,0.5459, 0.9170,0.5453,
0.9180,0.5446, 0.9191,0.5440, 0.9202,0.5434, 0.9212,0.5428, 0.9223,0.5421,
0.9233,0.5415, 0.9244,0.5409, 0.9254,0.5403, 0.9265,0.5397, 0.9276,0.5391,
0.9286,0.5384, 0.9297,0.5378, 0.9307,0.5372, 0.9318,0.5366, 0.9328,0.5360,
0.9338,0.5354, 0.9349,0.5348, 0.9359,0.5342, 0.9370,0.5336, 0.9380,0.5330,
0.9391,0.5324, 0.9401,0.5319, 0.9411,0.5313, 0.9422,0.5307, 0.9432,0.5301,
0.9442,0.5295, 0.9453,0.5289, 0.9463,0.5284, 0.9473,0.5278, 0.9484,0.5272,
0.9494,0.5266, 0.9504,0.5261, 0.9515,0.5255, 0.9525,0.5249, 0.9535,0.5244,
0.9545,0.5238, 0.9556,0.5233, 0.9566,0.5227, 0.9576,0.5221, 0.9586,0.5216,
0.9596,0.5210, 0.9607,0.5205, 0.9617,0.5199, 0.9627,0.5194, 0.9637,0.5188,
0.9647,0.5183, 0.9657,0.5177, 0.9667,0.5172, 0.9677,0.5167, 0.9687,0.5161,
0.9698,0.5156, 0.9708,0.5151, 0.9718,0.5145, 0.9728,0.5140, 0.9738,0.5135,
0.9748,0.5129, 0.9758,0.5124, 0.9768,0.5119, 0.9778,0.5114, 0.9788,0.5108,
0.9798,0.5103, 0.9808,0.5098, 0.9818,0.5093, 0.9828,0.5088, 0.9838,0.5083,
0.9847,0.5077, 0.9857,0.5072, 0.9867,0.5067, 0.9877,0.5062, 0.9887,0.5057,
0.9897,0.5052, 0.9907,0.5047, 0.9917,0.5042, 0.9926,0.5037, 0.9936,0.5032,
0.9946,0.5027, 0.9956,0.5022, 0.9966,0.5017, 0.9976,0.5012, 0.9985,0.5007,
0.9995,0.5002, 
1.0010,0.4995, 1.0029,0.4985, 1.0049,0.4976, 1.0068,0.4966, 1.0088,0.4957,
1.0107,0.4947, 1.0126,0.4938, 1.0145,0.4928, 1.0165,0.4919, 1.0184,0.4910,
1.0203,0.4901, 1.0222,0.4891, 1.0241,0.4882, 1.0260,0.4873, 1.0279,0.4864,
1.0298,0.4855, 1.0317,0.4846, 1.0336,0.4837, 1.0355,0.4829, 1.0374,0.4820,
1.0393,0.4811, 1.0411,0.4802, 1.0430,0.4794, 1.0449,0.4785, 1.0468,0.4777,
1.0486,0.4768, 1.0505,0.4760, 1.0523,0.4751, 1.0542,0.4743, 1.0560,0.4735,
1.0579,0.4726, 1.0597,0.4718, 1.0616,0.4710, 1.0634,0.4702, 1.0653,0.4694,
1.0671,0.4686, 1.0689,0.4678, 1.0707,0.4670, 1.0726,0.4662, 1.0744,0.4654,
1.0762,0.4646, 1.0780,0.4638, 1.0798,0.4630, 1.0816,0.4623, 1.0834,0.4615,
1.0852,0.4607, 1.0870,0.4600, 1.0888,0.4592, 1.0906,0.4585, 1.0924,0.4577,
1.0942,0.4570, 1.0960,0.4562, 1.0978,0.4555, 1.0995,0.4547, 1.1013,0.4540,
1.1031,0.4533, 1.1049,0.4525, 1.1066,0.4518, 1.1084,0.4511, 1.1101,0.4504,
1.1119,0.4497, 1.1137,0.4490, 1.1154,0.4483, 1.1172,0.4476, 1.1189,0.4469,
1.1207,0.4462, 1.1224,0.4455, 1.1241,0.4448, 1.1259,0.4441, 1.1276,0.4434,
1.1293,0.4427, 1.1311,0.4421, 1.1328,0.4414, 1.1345,0.4407, 1.1362,0.4401,
1.1379,0.4394, 1.1397,0.4387, 1.1414,0.4381, 1.1431,0.4374, 1.1448,0.4368,
1.1465,0.4361, 1.1482,0.4355, 1.1499,0.4348, 1.1516,0.4342, 1.1533,0.4335,
1.1550,0.4329, 1.1567,0.4323, 1.1584,0.4316, 1.1600,0.4310, 1.1617,0.4304,
1.1634,0.4298, 1.1651,0.4292, 1.1668,0.4285, 1.1684,0.4279, 1.1701,0.4273,
1.1718,0.4267, 1.1734,0.4261, 1.1751,0.4255, 1.1768,0.4249, 1.1784,0.4243,
1.1801,0.4237, 1.1817,0.4231, 1.1834,0.4225, 1.1850,0.4219, 1.1867,0.4213,
1.1883,0.4208, 1.1900,0.4202, 1.1916,0.4196, 1.1932,0.4190, 1.1949,0.4185,
1.1965,0.4179, 1.1981,0.4173, 1.1998,0.4167, 1.2014,0.4162, 1.2030,0.4156,
1.2046,0.4151, 1.2063,0.4145, 1.2079,0.4139, 1.2095,0.4134, 1.2111,0.4128,
1.2127,0.4123, 1.2143,0.4117, 1.2159,0.4112, 1.2175,0.4107, 1.2192,0.4101,
1.2208,0.4096, 1.2224,0.4090, 1.2239,0.4085, 1.2255,0.4080, 1.2271,0.4075,
1.2287,0.4069, 1.2303,0.4064, 1.2319,0.4059, 1.2335,0.4054, 1.2351,0.4048,
1.2366,0.4043, 1.2382,0.4038, 1.2398,0.4033, 1.2414,0.4028, 1.2429,0.4023,
1.2445,0.4018, 1.2461,0.4013, 1.2477,0.4008, 1.2492,0.4003, 1.2508,0.3998,
1.2523,0.3993, 1.2539,0.3988, 1.2555,0.3983, 1.2570,0.3978, 1.2586,0.3973,
1.2601,0.3968, 1.2617,0.3963, 1.2632,0.3958, 1.2648,0.3953, 1.2663,0.3949,
1.2678,0.3944, 1.2694,0.3939, 1.2709,0.3934, 1.2725,0.3929, 1.2740,0.3925,
1.2755,0.3920, 1.2771,0.3915, 1.2786,0.3911, 1.2801,0.3906, 1.2816,0.3901,
1.2832,0.3897, 1.2847,0.3892, 1.2862,0.3887, 1.2877,0.3883, 1.2892,0.3878,
1.2907,0.3874, 1.2923,0.3869, 1.2938,0.3865, 1.2953,0.3860, 1.2968,0.3856,
1.2983,0.3851, 1.2998,0.3847, 1.3013,0.3842, 1.3028,0.3838, 1.3043,0.3834,
1.3058,0.3829, 1.3073,0.3825, 1.3088,0.3820, 1.3103,0.3816, 1.3118,0.3812,
1.3132,0.3807, 1.3147,0.3803, 1.3162,0.3799, 1.3177,0.3794, 1.3192,0.3790,
1.3207,0.3786, 1.3221,0.3782, 1.3236,0.3778, 1.3251,0.3773, 1.3266,0.3769,
1.3280,0.3765, 1.3295,0.3761, 1.3310,0.3757, 1.3324,0.3753, 1.3339,0.3748,
1.3354,0.3744, 1.3368,0.3740, 1.3383,0.3736, 1.3397,0.3732, 1.3412,0.3728,
1.3427,0.3724, 1.3441,0.3720, 1.3456,0.3716, 1.3470,0.3712, 1.3485,0.3708,
1.3499,0.3704, 1.3514,0.3700, 1.3528,0.3696, 1.3542,0.3692, 1.3557,0.3688,
1.3571,0.3684, 1.3586,0.3680, 1.3600,0.3676, 1.3614,0.3673, 1.3629,0.3669,
1.3643,0.3665, 1.3657,0.3661, 1.3672,0.3657, 1.3686,0.3653, 1.3700,0.3650,
1.3714,0.3646, 1.3729,0.3642, 1.3743,0.3638, 1.3757,0.3634, 1.3771,0.3631,
1.3785,0.3627, 1.3800,0.3623, 1.3814,0.3620, 1.3828,0.3616, 1.3842,0.3612,
1.3856,0.3609, 1.3870,0.3605, 1.3884,0.3601, 1.3898,0.3598, 1.3912,0.3594,
1.3926,0.3590, 1.3940,0.3587, 1.3954,0.3583, 1.3968,0.3580, 1.3982,0.3576,
1.3996,0.3572, 1.4010,0.3569, 1.4024,0.3565, 1.4038,0.3562, 1.4052,0.3558,
1.4066,0.3555, 1.4080,0.3551, 1.4094,0.3548, 1.4108,0.3544, 1.4121,0.3541,
1.4135,0.3537
};


/* Generated by: */
#if 0
#include <math.h>
#include <stdio.h>
#include <assert.h>

int
main(int argc, char **argv)
{
  int i, j;

  printf ("const float __t_sqrt[1024] = {");
  for (i = 0; i < 2; i++)
    {
      putchar('\n');
      for (j = 0; j < 256; j++)
	{
	  double mval = j/512.0 + 0.5;
	  double eval = i==0 ? 1.0 : 2.0;
	  double ls = sqrt(mval*eval);
	  double hs = sqrt((mval+1/512.0)*eval);
	  double as = (ls+hs)*0.5;
	  double lx = 1/(2.0*ls);
	  double hx = 1/(2.0*hs);
	  double ax = (lx+hx)*0.5;

	  printf("%.4f,%.4f%s",as,ax,
		 i*j==255 ? "\n" : j % 5 == 4 ? ",\n" : ", ");
	  assert((hs-ls)/as < 1/256.0);
	  assert((hx-lx)/ax < 1/256.0);
	}
    }
  printf ("};\n");
  return 0;
}
#endif /* 0 */
