/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* Copyright (C) 2016 Freescale Semiconductor, Inc. */

#ifndef ANDROID_INCLUDE_IMX_CONFIG_RT5640_H
#define ANDROID_INCLUDE_IMX_CONFIG_RT5640_H

#include "audio_hardware.h"

#define PCM_PLAYBAK_VOLUME                  "PCM Playback Volume"
#define HEADPHONE_PLAYBACK_VOLUME           "Headphone Playback Volume"
#define HEADPHONE_PLAYBACK_ZC_SWITCH        "Headphone Playback ZC Switch"
#define HEADPHONE_MUX                       "Headphone Mux"

#define CAPTURE_VOLUME                      "Capture Volume"
#define CAPTURE_ATNT_SWITCH                 "Capture Attenuate Switch (-6dB)"
#define MIC_VOLUME                          "Mic Volume"
#define CAPTURE_MUX                         "Capture Mux"

static struct route_setting speaker_output_rt5640[] = {
#if 0
    {
        .ctl_name = PCM_PLAYBAK_VOLUME,
        .intval = 192,
    },
    {
        .ctl_name = HEADPHONE_PLAYBACK_VOLUME,
        .intval = 127,
    },
    {
        .ctl_name = HEADPHONE_PLAYBACK_ZC_SWITCH,
        .intval = 1,
    },
    {
        .ctl_name = HEADPHONE_MUX,
        .strval = "DAC",
    },
    {
        .ctl_name = NULL,
    },
#endif

#if 1
    //test rt5640	
    //{
    //    .ctl_name = "RT5640 ASRC Switch",
    //    .str_val = "Disable",
    //},
    {
        .ctl_name = "DAC MIXL INF1 Switch",
        .intval = 1,
    },
	{
        .ctl_name = "DAC MIXR INF1 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .intval = {1},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .intval = {1},
    },
    {
        .ctl_name = "SPK MIXL DAC L1 Switch",
        .intval = {1},
    },
    {
        .ctl_name = "SPK MIXR DAC R1 Switch",
        .intval = {1},
    },
    {
        .ctl_name = "SPOL MIX SPKVOL L Switch",
        .intval = {1},
    },
			   {
        .ctl_name = "SPOR MIX SPKVOL R Switch",
        .intval = {1},
    },
			   {
        .ctl_name = "Speaker L Playback Switch",
        .intval = {1},
    },
	{
        .ctl_name = "Speaker R Playback Switch",
        .intval = {1},
    },
	{
       .ctl_name = "Speaker Channel Switch",
       .intval = {1,1},
    },
    {
        .ctl_name = "HP L Playback Switch",
        .intval = {1},
    },
    {
        .ctl_name = "HP R Playback Switch",
        .intval = {1},
    },
    {
        .ctl_name = "HPO MIX DAC1 Switch",
        .intval = {1},
    },
    //{
    //    .ctl_name = "Class D SPK Ratio Control",
    //    .intval = {4},
    //},
#endif

#if 0
//test 1 OUT MIXR
    {
        .ctl_name = "DAC MIXL INF1 Switch",
        .intval = 1,
    },
	{
        .ctl_name = "DAC MIXR INF1 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Stereo DAC MIXL DAC L1 Switch",
        .intval = {1},
    },
    {
        .ctl_name = "Stereo DAC MIXR DAC R1 Switch",
        .intval = {1},
    },
    {
        .ctl_name = "SPK MIXL DAC L1 Switch",
        .intval = {0},
    },
    {
        .ctl_name = "SPK MIXR DAC R1 Switch",
        .intval = {0},
    },
    {
        .ctl_name = "SPK MIXL OUT MIXL Switch",
        .intval = {1},
    },
    {
        .ctl_name = "SPK MIXR OUT MIXR Switch",
        .intval = {1},
    },	
    {
        .ctl_name = "SPOL MIX SPKVOL L Switch",
        .intval = {1},
    },
	{
        .ctl_name = "SPOR MIX SPKVOL R Switch",
        .intval = {1},
    },
	{
        .ctl_name = "Speaker L Playback Switch",
        .intval = {1},
    },
	{
        .ctl_name = "Speaker R Playback Switch",
        .intval = {1},
    },
	  {
       .ctl_name = "Speaker Channel Switch",
       .intval = {1,1},
    },
    {
        .ctl_name = "HP L Playback Switch",
        .intval = {1},
    },
    {
        .ctl_name = "HP R Playback Switch",
        .intval = {1},
    },
    {
        .ctl_name = "HPO MIX DAC1 Switch",
        .intval = {1},
    },
    {
        .ctl_name = "OUT MIXR SPK MIXR Switch",
        .intval = {1},
    },
    {
        .ctl_name = "OUT MIXL DAC L1 Switch",
        .intval = {1},
    },	
    {
        .ctl_name = "OUT MIXR DAC R1 Switch",
        .intval = {1},
    },	
    {
        .ctl_name = "OUT MIXL SPK MIXL Switch",
        .intval = {1},
    },	
    {
        .ctl_name = "Speaker Playback Switch",
        .intval = {1,1},
    },
#endif	
    {
        .ctl_name = NULL,
    },	
};

static struct route_setting mm_main_mic_input_rt5640[] = {
    {
        .ctl_name = CAPTURE_VOLUME,
        .intval = 10,
    },
    {
        .ctl_name = CAPTURE_ATNT_SWITCH,
        .intval = 0,
    },
    {
        .ctl_name = MIC_VOLUME,
        .intval = 2,
    },
    {
        .ctl_name = CAPTURE_MUX,
        .strval = "MIC_IN",
    },

    {
        .ctl_name = NULL,
    },
};


/* ALSA cards for IMX, these must be defined according different board / kernel config*/
static struct audio_card  rt5640_card = {
    //.name = "rt5640-audio",
    //.driver_name = "rt5640-audio",
    .name = "imx6dl-rt5640",
    .driver_name = "imx6dl-rt5640",
    .supported_out_devices = (AUDIO_DEVICE_OUT_EARPIECE |
            AUDIO_DEVICE_OUT_SPEAKER |
            AUDIO_DEVICE_OUT_WIRED_HEADSET |
            AUDIO_DEVICE_OUT_WIRED_HEADPHONE |
            AUDIO_DEVICE_OUT_ANLG_DOCK_HEADSET |
            AUDIO_DEVICE_OUT_ALL_SCO |
            AUDIO_DEVICE_OUT_DEFAULT ),
    .supported_in_devices = (
            AUDIO_DEVICE_IN_COMMUNICATION |
            AUDIO_DEVICE_IN_AMBIENT |
            AUDIO_DEVICE_IN_BUILTIN_MIC |
            AUDIO_DEVICE_IN_WIRED_HEADSET |
            AUDIO_DEVICE_IN_BACK_MIC |
            AUDIO_DEVICE_IN_ALL_SCO |
            AUDIO_DEVICE_IN_DEFAULT),
    .defaults            = NULL,
    .bt_output           = NULL,
    .speaker_output      = speaker_output_rt5640,
    .hs_output           = NULL,
    .earpiece_output     = NULL,
    .vx_hs_mic_input     = NULL,
    .mm_main_mic_input   = mm_main_mic_input_rt5640,
    .vx_main_mic_input   = NULL,
    .mm_hs_mic_input     = NULL,
    .vx_bt_mic_input     = NULL,
    .mm_bt_mic_input     = NULL,
    .card                = 0,
    .out_rate            = 0,
    .out_channels        = 0,
    .out_format          = 0,
    .in_rate             = 0,
    .in_channels         = 0,
    .in_format           = 0,
};

#endif  /* ANDROID_INCLUDE_IMX_CONFIG_RT5640_H */
