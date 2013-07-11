Minimal Blink Demo
------------------

This is, as you might expect, my take on the minimal blink demo using
the arm-none-eabi GCC toolchain. I created it after I discovered that
the texane/stlink package no longer had a blink demo, and if you were
trying to figure out how the heck to just to a basic bare metal piece
of code, well this is it.

If you have the STM32F4-DISCOVERY board (which you can buy at 
[Element14]@(http://www.element14.com/community/docs/DOC-40508/l/stmicroelectronics-stm32f4-discovery-kit)
and you have the
[Summon ARM Toolchain](https://github.com/esden/summon-arm-toolchain),
then you should be able to just type 'make' and using the STLink tool
load the .hex file on to the board. At which point it will be blinking 
alternately the red/green LEDs and the Blue/Orange ones.  

I built an include file for the stm32f4 chip (stm32f4.h) and the GPIO
configuration registers (gpio.h). I've used the same register and flag
names as ST Micro did to make working from their examples easier. However,
unlike ST Micro the target here isn't every single possible configuration
so there is a lot missing if you are building random code which you
can either add in following the style I've started with or use a different
package.

Simlarly for stuff that ARM documents in the CMSIS include files, where
I've worked with the same register I've used the same name. Again to minimize
confusion. No sense confusing a definition of "system_timer" in my code
with the SysTick timer in the ARM code right?

Feel free to use, modify, and pass along any changes you make to whomever 
you want, understand though that this code is not warranted for fitness for
anything! I disclaim any responsibility for your use of it, incidental,
consequential, or otherwise. I wrote it for my own education and won't
even promise it will compile, much less run (especially given how frequently
gnu tools change). I compiled it with the gcc 4.7.3 compiler which I
found worked acceptably for my purposes.

--Chuck
