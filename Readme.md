# OSMIUM

x86 Operating System breaking all the rules...

## Building
###### Note: this section was written for Linux systems. Please submit an [issue](issues) if you have problems building OSMIUM.

### Step 1: Clone the Repository

```bash
git clone https://github.com/davidaylaian/OSMIUM.git
cd OSMIUM
```

### Step 2: Install Dependencies

* Make: `sudo apt-get install make`
* NASM: `sudo apt-get install nasm`
* GCC Cross-Compiler: [`http://wiki.osdev.org/GCC_Cross-Compiler`](http://wiki.osdev.org/GCC_Cross-Compiler)
* Xorriso: `sudo apt-get install xorriso`

### Step 3: Build the kernel

To build the kernel, run `make` inside of the kernel directory.

```bash
cd kernel
make
cd ..
```

### Step 4: Build OSMIUM.iso

To build OSMIUM.iso, copy kernel/kernel.bin to sysroot/boot, and use `grub-mkrescue` to build the disk image.

```bash
cp kernel/kernel.bin sysroot/boot
grub-mkrescue -o OSMIUM.iso sysroot
```

## Running

As OSMIUM is far from complete, it's a better idea to use an emulator to run it than real hardware. We use qemu to test OSMIUM, so we can't guarantee it'll work as well on other emulators.

To install qemu: `sudo apt-get install qemu`<br>
To use qemu: `qemu-system-i386 -cdrom OSMIUM.iso`

