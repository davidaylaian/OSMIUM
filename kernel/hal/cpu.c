/**
 *
 * Copyright 2018 David Aylaian
 * https://github.com/davidaylaian/OSMIUM/
 * Licensed under the Apache License 2.0
 *
 */

extern void gdt_load();
extern void idt_install();

void i386_cpu_initialize()
{
	gdt_load();
	//idt_install();
}
