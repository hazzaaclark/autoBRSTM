#pragma once

#ifndef AUDIO_FORMAT
#define AUDIO_FORMAT

#define SAMPLE_COUNT(VALUE) \
static FORMAT* TYPE ## VALUE(U32 SAMPLES);

#define SAMPLE_RATE
#define CHANNEL_COUNT
#define LOOP_START
#define LOOP_END
#define IS_LOOPING

typedef struct FORMAT
{


};


#endif