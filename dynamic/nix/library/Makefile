.PHONY: build clean

# .o -> Object
# .so -> Shared Object (Built dynamic library)
# -fPIC flag -> Generate position-independent code (PIC)
# -s -> Strip/Remove all symbol table and relocation information from the executable (optional, reduces size)
build:
	gcc -fPIC -o bod.o -c bod.c
	gcc -s -shared -o libbod.so bod.o

clean:
	-rm *.o
	-rm *.so