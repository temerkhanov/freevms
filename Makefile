VMSSUBDIRS = starlet librtl cliutl backup dir init login dcl edt
VMSSUBDIRSINST = dir dcl login init edt
VMSSUBDIRS2 = examples

vmsall:
	for X in $(VMSSUBDIRS); do \
		cd $$X/src; \
		make; \
		cd ../..; \
	done; \
	for X in $(VMSSUBDIRS2); do \
		cd $$X; \
		make; \
		cd ..; \
	done;

rootinstall:
	for X in $(VMSSUBDIRSINST); do \
		cd $$X/src; \
		make install; \
		cd ../..; \
	done; \
	for X in $(VMSSUBDIRS2); do \
		cd $$X; \
		make install; \
		cd ..; \
	done; 

image-install:
	make rootinstall; \
	cd diskimage; \
	./instmnt; \
	cd ..

image:
	cd diskimage; \
	make image; \
	cd ..

image-kernel-iomm:
	cd diskimage; \
	make image-kernel-iomm; \
	cd ..

image-kernel-noiomm:
	cd diskimage; \
	make image-kernel-noiomm; \
	cd ..

environment:
	./envscript

include Makefile.kernel
