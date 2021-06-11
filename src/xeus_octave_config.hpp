/*
 * Copyright (C) 2020 Giulio Girardi.
 *
 * This file is part of xeus-octave.
 *
 * xeus-octave is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * xeus-octave is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with xeus-octave.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef XOCTAVE_CONFIG_HPP
#define XOCTAVE_CONFIG_HPP

// Project version
#define XOCTAVE_VERSION_MAJOR 0
#define XOCTAVE_VERSION_MINOR 0
#define XOCTAVE_VERSION_PATCH 1

// Composing the version string from major, minor and patch
#define XOCTAVE_CONCATENATE(A, B) XOCTAVE_CONCATENATE_IMPL(A, B)
#define XOCTAVE_CONCATENATE_IMPL(A, B) A##B
#define XOCTAVE_STRINGIFY(a) XOCTAVE_STRINGIFY_IMPL(a)
#define XOCTAVE_STRINGIFY_IMPL(a) #a

#define XOCTAVE_VERSION XOCTAVE_STRINGIFY(XOCTAVE_CONCATENATE(XOCTAVE_VERSION_MAJOR,   \
                 XOCTAVE_CONCATENATE(.,XOCTAVE_CONCATENATE(XOCTAVE_VERSION_MINOR,   \
                                  XOCTAVE_CONCATENATE(.,XOCTAVE_VERSION_PATCH)))))

#ifdef _WIN32
    #ifdef XEUS_OCTAVE_EXPORTS
        #define XEUS_OCTAVE_API __declspec(dllexport)
    #else
        #define XEUS_OCTAVE_API __declspec(dllimport)
    #endif
#else
    #define XEUS_OCTAVE_API
#endif

#endif
