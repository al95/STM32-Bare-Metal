# STM32F103C8 bare metal C template

_If you're new to the STM32 world, I strongly suggest you read **all** this README file **before** you start coding. Also there are comments in almost every source file. It's a good idea to read them._

&nbsp;

## Quick start guide

To start programming using this template you need to follow these steps.  

#### 1. Get the files

Clone this repo with `git clone https://github.com/al95/STM32-Bare-Metal.git`  
or download a zip file from [**here**](https://github.com/al95/STM32-Bare-Metal/archive/master.zip).  

#### 2. Configure the Makefile (Part 1)

At the beginning of the file you'll find two variables that you may want to change.  

+ **TARGET**: This is the name of your program and will be used to name the "output" files.  
e.g., `TARGET = blinky` will generate `blinky.elf`, `blinky.bin` and `blinky.hex`.  

+ **OPTFLAGS**: This sets the gcc optimization level.  
I suggest using `-O2` to optimize for speed or `-Os` to optimize for size, but be aware that you might get some unexpected results if you're not careful with your code.  
If you're not sure just leave it at `-O0`.  

#### 3. Write your code
+ Write your main function inside `main.c`
+ Add as many other source files as you want
+ If you're using interrupts, add your ISRs to the vector table in `init.c`

#### 4. Configure the Makefile (Part 2)
Add to `OTHER_SRCS` all the source files that you want to compile.  
e.g., `OTHER_SRCS = main.c usarts.c timers.c`  

#### 5. Compile
Just run `make`.  
You should get (at least) three files: an ELF, a BIN and an HEX.  
The **.elf** file is the "final product" of the compilation.  
If you don't know what an ELF file is, it probably means you don't need it.  
The **.bin** and **.hex** files contain the actual data that will be written to the STM32 flash.  
Which one you need depends on the programming software you want to use.  

#### 6. Flash
Flash your program to the STM32.  
If you have [**texane's stlink**](https://github.com/texane/stlink) installed you can just run `make flash`.  
Otherwise, use whatever programming software you prefer.  

#### 7. Have fun
That's it!  

&nbsp;  

## Debugging guide

To debug your program follow the first 4 steps of the *Quick start guide* then run `make debug`.  
This will disable any optimization (`-O0`), add detailed debug information for gdb (`-ggdb3`) and generate a few additional files. These are:  

+ __*.o__: intermediate object files
+ __*.size__: size of the _.text_, _.data_ and _.bss_ sections
+ __*.su__: stack usage statistics (`gcc -fstack-usage`)
+ __*.map__: link map (`ld -Map`)
+ __*.lst__: disassembled program with sections, symbols and source files (`objdump -x -S`)
+ __*.dis__: complete disassembly of all sections (`objdump -D`)

The Makefile included in this template can start a debugging session using [**st-util**](https://github.com/texane/stlink) and gdb:  
1. Open a terminal and `cd` into the source folder.
2. Run `make server` to open the st-util server.
3. Open another terminal and `cd` into the source folder.
4. Run `make gdb` to run gdb.
5. Inside gdb run `load` to load your program into flash.
6. Good luck!

You're on your own from here. If you don't know how to use gdb, Google is your friend. It's easier than it looks.  

&nbsp;  

## Frequent problems

1. *When i run* `make` *I get* `/bin/sh: arm-none-eabi-gcc: command not found`  
Check that the ARM version of gcc is correctly installed.  
If your gcc is installed using a different name prefix or in a user-defined folder you must change the `CROSS_COMPILE` variable inside the Makefile.  
e.g., `CROSS_COMPILE = another-prefix-` will run `another-prefix-gcc`  
e.g., `CROSS_COMPILE = /home/john/arm/arm-none-eabi-` will run `/home/john/arm/arm-none-eabi-gcc`  

&nbsp; 

2. *When I run* `make server` *I get* `bind: Address already in use`  
By default st-util communicates with gdb through port 4242.  
If you get this error it means that port 4242 is already in use by another program.  
Change `STUTIL_PORT` inside the Makefile to use a different port.  
e.g., `STUTIL_PORT = 5555` will use port 5555  

&nbsp; 

3. *When I run* `make server` *I get* `bind: Permission denied`  
You selected a privileged port number. Try another port &gt;=1024.  

&nbsp;

4. *When I run* `make server` *I get* `make: st-util: Command not found`  
Check that [**st-util**](https://github.com/texane/stlink) is correctly installed.  
If st-util is installed in a user-defined folder you must change the `STUTIL` variable inside the Makefile.  
e.g., `STUTIL = /home/john/stlink/st-util` will run `/home/john/stlink/st-util`  

&nbsp;

5. *When I run* `make flash` *or* `make erase` *I get* `make: st-flash: Command not found`  
Check that [**st-flash**](https://github.com/texane/stlink) is correctly installed.  
If st-flash is installed in a user-defined folder you must change the `STFLASH` variable inside the Makefile.  
e.g., `STFLASH = /home/john/stlink/st-flash` will run `/home/john/stlink/st-flash`  

&nbsp;

6. *When I use optimization levels higher than* `-O0` *my program doesn't work correctly* / *interrupts don't work.*  
Make sure that **every** global variable that gets changed by an ISR is declared as **volatile**.  

&nbsp; 

7. *Can I enable optimization for the debug build?*  
Yes, but be aware that debugging an optimized program is often a bad idea.  
You can set the debug optimization level using the `DBG_OPTFLAGS` variable inside the Makefile.   
e.g., `DBG_OPTFLAGS = -O2` will compile using `-O2`  

&nbsp; 

8. *Can I see what* `make` *is doing?*  
Yes, by changing the `VERBOSE` variable inside the Makefile.  
`VERBOSE = N` is the default option and `VERBOSE = Y` will enable the verbose mode.  

&nbsp; 

9. *When i run* `make` *I get* `region 'RAM' overflowed by ... bytes`  
This means you're using too much RAM.  
The linker script is set to keep 2KB of free RAM to be used by the stack and the heap.  
This is accomplished by defining two fake empty memory sections in the linker script.  
If you're sure that your program will work with less free RAM, you can lower the amount of free memory by changing the `_heap_size` and `_stack_size` variables in the linker script.  
By default they are set to 1KB each.  

&nbsp;  

---







