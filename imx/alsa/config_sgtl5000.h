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

#ifndef ANDROID_INCLUDE_IMX_CONFIG_SGTL5000_H
#define ANDROID_INCLUDE_IMX_CONFIG_SGTL5000_H

#include "audio_hardware.h"

#define PCM_PLAYBAK_VOLUME                  "PCM Playback Volume"
#define HEADPHONE_PLAYBACK_VOLUME           "Headphone Playback Volume"
#define HEADPHONE_PLAYBACK_ZC_SWITCH        "Headphone Playback ZC Switch"
#define HEADPHONE_MUX                       "Headphone Mux"

#define CAPTURE_VOLUME                      "Capture Volume"
#define CAPTURE_ATNT_SWITCH                 "Capture Attenuate Switch (-6dB)"
#define MIC_VOLUME                          "Mic Volume"
#define CAPTURE_MUX                         "Capture Mux"

static struct route_setting speaker_output_sgtl5000[] = {
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
};

static struct route_setting mm_main_mic_input_sgtl5000[] = {
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
static struct audio_card  sgtl5000_card = {
    .name = "sgtl5000-audio",
    .driver_name = "sgtl5000-audio",
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
    .speaker_output      = speaker_output_sgtl5000,
    .hs_output           = NULL,
    .earpiece_output     = NULL,
    .vx_hs_mic_input     = NULL,
    .mm_main_mic_input   = mm_main_mic_input_sgtl5000,
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

#endif  /* ANDROID_INCLUDE_IMX_CONFIG_SGTL5000_H */
