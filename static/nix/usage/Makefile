.PHONY: build clean

build:
	gcc -o main.o -c main.c -I"../library"
	gcc -o main main.o -L"../library" -lbod

clean:
	rm *.o
	rm main