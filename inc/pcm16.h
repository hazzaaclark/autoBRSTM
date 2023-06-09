/* Copyright (C) Harry Clark 2023 */

/* Automatic Mario Kart Wii BRSTM Creation */

/* THIS FILE PERTAINS TO THE API STRUCTURE OF THE AUDIO SCHEMA IMPLEMENTED */
/* INTO THIS PROJECT */

/* THIS FILE HANDLES THE PCM 16 CODEC OF AUDIO SPECIFICALLY */
/* WHICH HANDLES THE AUDIO SAMPLING USED ON THE WII */

#ifndef PCM16
#define PCM16

/* NESTED INCLUDES */

#include "common.h"

/* SYSTEM INCLUDES */

#include <cstdlib>
#include <stdio.h>

#if defined(USE_PCM)
#define USE_PCM
#else
#define USE_PCM

#define ENCODE(VALUE) \
static PCM_16* TYPE ## VALUE(U16 ARRAY);

#define DECODE(VALUE) \
static PCM_16* DECODE ## VALUE(U16 ARRAY);

#define ENCODE_SIGNED(VALUE) \
static PCM_16* ENCODE_SIGNED ## VALUE(S16 ARRAY);

#define DECODE_SIGNED(VALUE) \
static PCM_16* DECODE_SIGNED ## VALUE(S16 ARRAY);

#define PCM_MAX                    0x00000000000

typedef struct PCM_16
{
	static U16* ARRAY[];
	static U16* OUTPUT[];
};

typedef struct ENCODER
{
	ENCODE();
	DECODE();
	ENCODE_SIGNED();
	DECODE_SIGNED();
};

#endif


#endif