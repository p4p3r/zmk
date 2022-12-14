/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#define ZMK_SPLIT_RUN_BEHAVIOR_DEV_LEN 9

struct zmk_split_run_behavior_data {
    uint8_t position;
    uint8_t state;
    uint32_t param1;
    uint32_t param2;
} __packed;

struct zmk_split_run_behavior_payload {
    struct zmk_split_run_behavior_data data;
    char behavior_dev[ZMK_SPLIT_RUN_BEHAVIOR_DEV_LEN];
} __packed;

int send_position_state();

