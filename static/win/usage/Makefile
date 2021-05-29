.PHONY: build clean

build:
	gcc -o main.obj -c main.c -I"../library"
	gcc -o main.exe main.obj -L"../library" -lbod

clean:
	-rm *.obj
	-rm *.exe