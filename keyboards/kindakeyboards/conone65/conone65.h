/* Copyright 2021 Kindakeyboards
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define ___ KC_NO
#define LAYOUT_all( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0f, k0d, k0e, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,      k1d, k1e, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c,      k2d, k2e, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c,      k3d, k3e, \
    k40, k41, k42,      k44,      k46,      k48, k49, k4a, k4b, k4c,      k4d, k4e  \
) \
{ \
    {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f}, \
    {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, ___}, \
    {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, ___}, \
    {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, ___}, \
    {k40, k41, k42, ___, k44, ___, k46, ___, k48, k49, k4a, k4b, k4c, k4d, k4e, ___}  \
}

#define LAYOUT_65_ansi( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,      k2d, k2e, \
    k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, \
    k40, k41, k42,                k46,           k49, k4a, k4b, k4c, k4d, k4e  \
) \
{ \
    {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, ___}, \
    {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, ___}, \
    {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, ___, k2d, k2e, ___}, \
    {k30, ___, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, ___}, \
    {k40, k41, k42, ___, ___, ___, k46, ___, ___, k49, k4a, k4b, k4c, k4d, k4e, ___}  \
}

#define LAYOUT_65_ansi_split_bs( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0f, k0d, k0e, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,      k2d, k2e, \
    k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, \
    k40, k41, k42,                k46,           k49, k4a, k4b, k4c, k4d, k4e  \
) \
{ \
    {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f}, \
    {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, ___}, \
    {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, ___, k2d, k2e, ___}, \
    {k30, ___, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, ___}, \
    {k40, k41, k42, ___, ___, ___, k46, ___, ___, k49, k4a, k4b, k4c, k4d, k4e, ___}  \
}

#define LAYOUT_65_ansi_split_bs_space( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0f, k0d, k0e, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,      k2d, k2e, \
    k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, \
    k40, k41, k42,      k44,      k46,      k48, k49, k4a, k4b, k4c, k4d, k4e  \
) \
{ \
    {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f}, \
    {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, ___}, \
    {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, ___, k2d, k2e, ___}, \
    {k30, ___, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, ___}, \
    {k40, k41, k42, ___, k44, ___, k46, ___, k48, k49, k4a, k4b, k4c, k4d, k4e, ___}  \
}

#define LAYOUT_65_iso( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,      k1e, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, \
    k40, k41, k42,                k46,           k49, k4a, k4b, k4c, k4d, k4e  \
) \
{ \
    {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, ___}, \
    {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, ___, k1e, ___}, \
    {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, ___}, \
    {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, ___}, \
    {k40, k41, k42, ___, ___, ___, k46, ___, ___, k49, k4a, k4b, k4c, k4d, k4e, ___}  \
}

#define LAYOUT_65_iso_split_bs( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0f, k0d, k0e, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,      k1e, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, \
    k40, k41, k42,                k46,           k49, k4a, k4b, k4c, k4d, k4e  \
) \
{ \
    {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f}, \
    {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, ___, k1e, ___}, \
    {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, ___}, \
    {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, ___}, \
    {k40, k41, k42, ___, ___, ___, k46, ___, ___, k49, k4a, k4b, k4c, k4d, k4e, ___}  \
}

#define LAYOUT_65_iso_split_bs_space( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0f, k0d, k0e, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,      k1e, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, \
    k40, k41, k42,      k44,      k46,      k48, k49, k4a, k4b, k4c, k4d, k4e  \
) \
{ \
    {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f}, \
    {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, ___, k1e, ___}, \
    {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, ___}, \
    {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, ___}, \
    {k40, k41, k42, ___, k44, ___, k46, ___, k48, k49, k4a, k4b, k4c, k4d, k4e, ___}  \
}
