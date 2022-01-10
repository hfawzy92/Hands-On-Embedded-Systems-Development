1. Why embedded systems development is more challanging than general-purpose desktop systems ?
2. When power is first applied to the desktop computer , what is the first software program that takes control of the processor ?
    1. Where that software program might be stored ?
    2. What is BIOS ? and What is its main functionality/goal ?
    3. BIOS is a bootloader software program. T/F ?
    4. Bootloaders are generic software programs and can be used/ported for any processor architecure. T/F ?
    5. Give names of 3 open source bootloaders.
        1. What do you know about U-Boot ?
    6. State briefly the most important tasks that are performed by bootloader just after the power-up.
       Hint: Regarding the SDRAM Controller , I/O Controllers , graphics Controller , memory , loading image.
    7. When you buy an of-the-shelf board/platform , the supplier should provide you with the bootloader and kernel. T/F ?
3. Draw a neat diagram of a typical embedded linux development setup .
    1. What is meant by the Host Machine/System , and the Embedded Linux Target. What is the difference between them ?
    2. How the Embedded Linux Target can be connected to the host systems ?
        1. Name 3 common serial terminal applications.
4. Below is a snippet of the initial bootloader serial output. Write down the main steps that have been done by the bootloader after power-up.
```
U-Boot 2009.01 (May 20 2009 - 09:45:35)
CPU: 8548E, Version: 2.1, (0x80390021)
Core: E500, Version: 2.2, (0x80210022)
Clock Configuration:
 CPU:990 MHz, CCB:396 MHz,
 DDR:198 MHz (396 MT/s data rate), LBC:49.500 MHz
L1: D-cache 32 kB enabled
 I-cache 32 kB enabled
Board: CDS Version 0x13, PCI Slot 1
CPU Board Revision 0.0 (0x0000)
I2C: ready
DRAM: Initializing
 SDRAM: 64 MB
 DDR: 256 MB
FLASH: 16 MB
L2: 512 KB enabled
Invalid ID (ff ff ff ff)
 PCI: 64 bit, unknown MHz, async, host, external-arbiter
 Scanning PCI bus 00
PCI on bus 00 - 02
 PCIE connected to slot as Root Complex (base address e000a000)
PCIE on bus 3 - 3
In: serial
Out: serial
Err: serial
Net: eTSEC0, eTSEC1, eTSEC2, eTSEC3
=>
```
5. Bootloaders can have a user command line interface (CLI). T/F ?
6. What is the last task/job would be done by any bootloader ?
7. Below is a serial output snippet of loading linux kernel.
    1. Can you manually instruct the bootloader to load the kernel ?
    2. What do you know about the "tftp" command ?
    3. From the below snippet:
        1. what is the name of the kernel being loaded ?
        2. Is the kernel loaded from the host machine or target device ?
        3. How to specify where the kernel would be loaded in the target's memory ?
        4. Device tree , flat device tree or device tree binary are all refers to the Board Configuration File. T/F ?
            1. What is the purpose of the Board Configuration File ?
        5. Which command instructs the bootloader to give the control to the loaded kernel ?
        6. Bootloader will be still working in the background while kernel boots. T/F ?
            1. If false , what is the last printed line by the bootloader ?
```text
=> tftp 600000 uImage
Speed: 1000, full duplex
Using eTSEC0 device
TFTP from server 192.168.0.103; our IP address is 192.168.0.18
Filename ‘uImage’.
Load address: 0x600000
Loading: #################################################################
 #############################################################
done
Bytes transferred = 1838553 (1c0dd9 hex)
=> tftp c00000 dtb
Speed: 1000, full duplex
Using eTSEC0 device
TFTP from server 192.168.0.103; our IP address is 192.168.0.18
Filename ‘dtb’.
Load address: 0xc00000
Loading: ##
done
Bytes transferred = 16384 (4000 hex)
=> bootm 600000 - c00000
## Booting kernel from Legacy Image at 00600000 ...
 Image Name: MontaVista Linux 6/2.6.27/freesc
 Image Type: PowerPC Linux Kernel Image (gzip compressed)
 Data Size: 1838489 Bytes = 1.8 MB
 Load Address: 00000000
 Entry Point: 00000000
 Verifying Checksum ... OK
## Flattened Device Tree blob at 00c00000
 Booting using the fdt blob at 0xc00000
 Uncompressing Kernel Image ... OK
 Loading Device Tree to 007f9000, end 007fffff ... OK
Using MPC85xx CDS machine description
Memory CAM mapping: CAM0=256Mb, CAM1=0Mb, CAM2=0Mb residual: 0Mb
...
< Lots of Linux kernel boot messages, removed for clarity >
...
freescale-8548cds login: <<--- Linux login prompt
 ```