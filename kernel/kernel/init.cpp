// Copyright 2016 The Fuchsia Authors
// Copyright (c) 2013 Travis Geiselbrecht
//
// Use of this source code is governed by a MIT-style
// license that can be found in the LICENSE file or at
// https://opensource.org/licenses/MIT

#include <kernel/init.h>

#include <debug.h>
#include <kernel/mp.h>
#include <kernel/thread.h>
#include <kernel/timer.h>
#include <zircon/compiler.h>

void kernel_init(void) {
    dprintf(SPEW, "initializing mp\n");

    // 多核初始化 *
    mp_init();

    dprintf(SPEW, "initializing timers\n");

    // 计时器队列初始化 *
    timer_queue_init();
}
