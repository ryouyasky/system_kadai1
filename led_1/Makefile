# SPDX-License-Identifier: GPL-2.0
obj-m:=	myled.o

myled.ko: myled.c
	make -C	/usr/src/linux M=`pwd` V=1 modules
clean:
	make -C /usr/src/linux M=`wd` V=1 clean
