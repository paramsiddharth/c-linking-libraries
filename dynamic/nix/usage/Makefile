.PHONY: build clean

# Double dollar-sign -> Escaping $ in Makefiles
# -Wl,-rpath='$$ORIGIN' or -Wl,-rpath=. -> Setting an argument for the linker
# to look for the library in the current directory; Else it looks for it in
# $LD_LIBRARY_PATH (usually empty), and/or /usr/local/lib
# Copying libbod.so to the current directory is needed for the above to work
# -s -> Strip/Remove all symbol table and relocation information from the executable (optional, reduces size)
build:
	gcc -o main.o -c main.c -I"../library"
	gcc -o main main.o -s -L"../library" -lbod -Wl,-rpath=.
	cp ../library/libbod.so .

clean:
	-rm *.o
	-rm *.so
	-rm main