.PHONY: build clean

# -s -> Strip/Remove all symbol table and relocation information from the executable (optional, reduces size)
build:
	gcc -o main.o -c main.c -I"../library"
	gcc -o main main.o -s -L"../library" -lbod

clean:
	-rm *.o
	-rm main