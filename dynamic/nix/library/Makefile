.PHONY: build clean

# .o -> Object
# .so -> Shared Object (Built dynamic library)
# -fPIC flag -> Generate position-independent code (PIC)
build:
	gcc -fPIC -o bod.o -c bod.c
	gcc -shared -o libbod.so bod.o

clean:
	-rm *.o
	-rm *.so