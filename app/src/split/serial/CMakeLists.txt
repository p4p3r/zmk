# Copyright (c) 2022 The ZMK Contributors
# SPDX-License-Identifier: MIT

target_sources(app PRIVATE common.c)

if (NOT CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
  target_sources(app PRIVATE service.c)
endif()
if (CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
  target_sources(app PRIVATE central.c)
endif()

