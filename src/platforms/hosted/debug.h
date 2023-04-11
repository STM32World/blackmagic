/*
 * This file is part of the Black Magic Debug project.
 *
 * Copyright (C) 2023 1BitSquared <info@1bitsquared.com>
 * Written by Rachel Mant <git@dragonmux.network>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef PLATFORMS_HOSTED_DEBUG_H
#define PLATFORMS_HOSTED_DEBUG_H

#include <stdint.h>

#define BMD_DEBUG_ERROR      (1U << 0U)
#define BMD_DEBUG_WARNING    (1U << 1U)
#define BMD_DEBUG_INFO       (1U << 2U)
#define BMD_DEBUG_GDB        (1U << 3U)
#define BMD_DEBUG_TARGET     (1U << 4U)
#define BMD_DEBUG_PROTO      (1U << 5U)
#define BMD_DEBUG_PROBE      (1U << 6U)
#define BMD_DEBUG_WIRE       (1U << 7U)
#define BMD_DEBUG_USE_STDERR (1U << 15U)

/* These two macros control which of the above levels are accessible from the verbosity CLI argument */
#define BMD_DEBUG_LEVEL_MASK  0x00fcU
#define BMD_DEBUG_LEVEL_SHIFT 2U

extern uint16_t bmda_debug_flags;

void debug_error(const char *format, ...) __attribute__((format(printf, 1, 2)));
void debug_warning(const char *format, ...) __attribute__((format(printf, 1, 2)));
void debug_info(const char *format, ...) __attribute__((format(printf, 1, 2)));
void debug_gdb(const char *format, ...) __attribute__((format(printf, 1, 2)));
void debug_target(const char *format, ...) __attribute__((format(printf, 1, 2)));
void debug_protocol(const char *format, ...) __attribute__((format(printf, 1, 2)));
void debug_probe(const char *format, ...) __attribute__((format(printf, 1, 2)));
void debug_wire(const char *format, ...) __attribute__((format(printf, 1, 2)));

#endif /*PLATFORMS_HOSTED_DEBUG_H*/
