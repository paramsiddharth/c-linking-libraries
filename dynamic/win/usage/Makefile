.PHONY: build clean

# Copying libbod.dll to the current directory is needed for dynamic linking to work
# Unlike *NIX, in Windows, the DLL is looked for in PATH
# -s -> Strip/Remove all symbol table and relocation information from the executable (optional, reduces size)
build:
	gcc -o main.obj -c main.c -I"../library"
	gcc -o main.exe main.obj -s -L"../library" -lbod
	cp ../library/libbod.dll .

clean:
	-rm *.obj
	-rm *.dll
	-rm *.exe