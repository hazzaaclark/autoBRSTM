/* Copyright (C) Harry Clark 2023 */

/* Automatic Mario Kart Wii BRSTM Creation */

/* THIS FILE PERTAINS TO THE API STRUCTURE OF THE AUDIO SCHEMA IMPLEMENTED */
/* INTO THIS PROJECT */

/* THROUGH THIS, I AM ABLE TO CREATE STATIC OBJECTS FOR THE AUDIO FORMAT */
/* WHICH WILL BE REFERRED TO IN THEIR RESPECTIVE FUNCTION CALL */

#pragma once

#ifndef AUDIO_FORMAT
#define AUDIO_FORMAT

/* NESTED INCLUDES */

#include "common.h"

#define SAMPLE_COUNT(VALUE) \
static FORMAT* TYPE ## VALUE(U32 SAMPLES);

#define SAMPLE_RATE(VALUE) \
static FORMAT* TYPE ## VALUE(U32 SAMPLE_RATE);

#define CHANNEL_COUNT(VALUE) \
static FORMAT* TYPE ## VALUE(U32 CHANNEL_COUNT, U32 SAMPLES);

#define LOOP_START(VALUE) \
static FORMAT* TYPE ## VALUE(U32 START_TIME);

#define LOOP_END(VALUE) \
static FORMAT* TYPE ## VALUE(U32 END_TIME);

#define IS_LOOPING(VALUE) \
static FORMAT* TYPE ## VALUE(U32 LOOP_TIME, bool LOOP);

typedef struct FORMAT;
typedef struct FORMAT_BASE;

VOID_FUNCTION(LOOP_INIT);
VOID_FUNCTION(CHANNEL_INIT);
VOID_FUNCTION(ENCODE_RAW_PCM);
VOID_FUNCTION(GET_CHANNELS);


#endif
