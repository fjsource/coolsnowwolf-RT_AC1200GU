/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999, 2000, 2001, 2002, 2004, 2005, 2008, 2009
Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see http://www.gnu.org/licenses/.  */

#define BITS_PER_MP_LIMB 64
#define BYTES_PER_MP_LIMB 8

#define DIVEXACT_BY3_METHOD 0	/* override ../diveby3.asm */

/* 500 MHz 21164 */

/* Generated by tuneup.c, 2009-01-12, gcc 3.3 */

#define MUL_KARATSUBA_THRESHOLD          31
#define MUL_TOOM3_THRESHOLD             101
#define MUL_TOOM44_THRESHOLD            168

#define SQR_BASECASE_THRESHOLD            6
#define SQR_KARATSUBA_THRESHOLD          60
#define SQR_TOOM3_THRESHOLD             102
#define SQR_TOOM4_THRESHOLD             172

#define MULLOW_BASECASE_THRESHOLD         0  /* always */
#define MULLOW_DC_THRESHOLD             102
#define MULLOW_MUL_N_THRESHOLD          399

#define DIV_SB_PREINV_THRESHOLD           0  /* preinv always */
#define DIV_DC_THRESHOLD                134
#define POWM_THRESHOLD                  257

#define MATRIX22_STRASSEN_THRESHOLD      19
#define HGCD_THRESHOLD                  303
#define GCD_DC_THRESHOLD               1258
#define GCDEXT_DC_THRESHOLD             807
#define JACOBI_BASE_METHOD                3

#define DIVREM_1_NORM_THRESHOLD           0  /* preinv always */
#define DIVREM_1_UNNORM_THRESHOLD         0  /* always */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define MOD_1_1_THRESHOLD                13
#define MOD_1_2_THRESHOLD                14
#define MOD_1_4_THRESHOLD                40
#define USE_PREINV_DIVREM_1               1  /* preinv always */
#define USE_PREINV_MOD_1                  1  /* preinv always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */

#define GET_STR_DC_THRESHOLD             16
#define GET_STR_PRECOMPUTE_THRESHOLD     23
#define SET_STR_DC_THRESHOLD           4615
#define SET_STR_PRECOMPUTE_THRESHOLD   8178

#define MUL_FFT_TABLE  { 432, 864, 1856, 3840, 11264, 28672, 81920, 327680, 0 }
#define MUL_FFT_MODF_THRESHOLD          448
#define MUL_FFT_THRESHOLD              4992

#define SQR_FFT_TABLE  { 432, 864, 1728, 3840, 9216, 20480, 81920, 327680, 786432, 0 }
#define SQR_FFT_MODF_THRESHOLD          344
#define SQR_FFT_THRESHOLD              3712