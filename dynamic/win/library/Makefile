.PHONY: build clean

# .obj -> Object
# .dll -> Dynamic Link Library (Built dynamic library)
# -s -> Strip/Remove all symbol table and relocation information from the executable (reduces size)
build:
	gcc -o bod.obj -c bod.c
	gcc -shared -o libbod.dll bod.obj

clean:
	-rm *.obj
	-rm *.dll