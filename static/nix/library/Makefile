.PHONY: build clean

build:
	gcc -o bod.o -c bod.c
	ar rcs libbod.a bod.o

clean:
	-rm *.o
	-rm *.a