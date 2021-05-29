.PHONY: build clean

# -s -> Strip/Remove all symbol table and relocation information from the executable (optional, reduces size)
build:
	gcc -o main.obj -c main.c -I"../library"
	gcc -o main.exe main.obj -s -L"../library" -lbod

clean:
	-rm *.obj
	-rm *.exe