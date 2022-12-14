# Copyright (c) 2022 The ZMK Contributors
# SPDX-License-Identifier: MIT

target_sources(app PRIVATE common.c)

if (CONFIG_ZMK_SPLIT_BLE)
    add_subdirectory(bluetooth)
endif()

if (CONFIG_ZMK_SPLIT_SERIAL)
    add_subdirectory(serial)
endif()

if (NOT CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
  target_sources(app PRIVATE split_listener.c)
endif()
