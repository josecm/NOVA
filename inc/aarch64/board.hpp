/*
 * Board Selection
 *
 * Copyright (C) 2019-2020 Udo Steinberg, BedRock Systems, Inc.
 *
 * This file is part of the NOVA microhypervisor.
 *
 * NOVA is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * NOVA is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License version 2 for more details.
 */

#pragma once

#if defined (BOARD_qemu)
#include "board_qemu.hpp"

#elif defined(BOARD_imx8)
#include "board_imx8.hpp"

#elif defined (BOARD_poc)
#include "board_poc.hpp"

#elif defined (BOARD_rcar)
#include "board_rcar.hpp"

#elif defined (BOARD_rpi4)
#include "board_rpi4.hpp"

#elif defined (BOARD_rpi4_uefi)
#include "board_rpi4_uefi.hpp"

#elif defined (BOARD_sdm670)
#include "board_sdm670.hpp"

#elif defined (BOARD_u96)
#include "board_u96.hpp"

#else
#error "You need to select a valid board (see Makefile.conf.example)!"

#endif
