/**
 *
 * Copyright 2017 David Aylaian
 * https://github.com/davidaylaian/OSMIUM/
 * Licensed under the Apache License 2.0
 *
 */

#ifndef _OSMIUM_IO_H
#define _OSMIUM_IO_H

#include <stdint.h>

extern void enable();
extern void disable();
extern uint8_t inb(uint16_t port);
extern void outb(uint16_t port, uint8_t val);

#endif
