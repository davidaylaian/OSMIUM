/**
 *
 * Copyright 2018 David Aylaian
 * https://github.com/davidaylaian/OSMIUM/
 * Licensed under the Apache License 2.0
 *
 */

#ifndef _ATTRIBUTE_H
#define _ATTRIBUTE_H

#define noinline	__attribute__((noinline))
#define noreturn	__attribute__((noreturn))
#define packed		__attribute__((packed))
#define pure		__attribute__((pure))

#define aligned(x)	__attribute__((aligned(x)))

#endif
