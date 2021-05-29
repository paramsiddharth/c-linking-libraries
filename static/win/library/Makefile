.PHONY: build clean

build:
	gcc -o bod.obj -c bod.c
	ar rcs libbod.lib bod.obj

clean:
	-rm *.obj
	-rm *.lib