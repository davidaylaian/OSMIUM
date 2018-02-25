/**
 *
 * Copyright 2018 David Aylaian
 * https://github.com/davidaylaian/OSMIUM/
 * Licensed under the Apache License 2.0
 *
 */

extern void i386_cpu_initialize();

void hal_initialize()
{
	i386_cpu_initialize();
}
