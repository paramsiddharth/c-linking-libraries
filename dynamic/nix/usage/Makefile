.PHONY: build clean

# Double dollar-sign -> Escaping $ in Makefiles
# -Wl,-rpath='$$ORIGIN' or -Wl,-rpath=. -> Setting an argument for the linker
# to look for the library in the current directory; Else it looks for it in
# $LD_LIBRARY_PATH (usually empty), and/or /usr/local/lib
build:
	gcc -o main.o -c main.c -I"../library"
	cp ../library/libbod.so .
	gcc -Wl,-rpath=. -o main main.o libbod.so

clean:
	-rm *.o
	-rm *.so
	-rm main