/* Copyright (c) 2011, 2013, 2015 The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <linux/module.h>

#include "kgsl.h"
//#include "kgsl_device.h"

/* Instantiate tracepoints */
#define CREATE_TRACE_POINTS
#include "kgsl_trace.h"

EXPORT_TRACEPOINT_SYMBOL(kgsl_regwrite);
EXPORT_TRACEPOINT_SYMBOL(kgsl_issueibcmds);
EXPORT_TRACEPOINT_SYMBOL(kgsl_user_pwrlevel_constraint);
EXPORT_TRACEPOINT_SYMBOL(kgsl_constraint);
