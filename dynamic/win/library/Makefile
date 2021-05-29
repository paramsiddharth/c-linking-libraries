.PHONY: build clean

# .obj -> Object
# .dll -> Dynamic Link Library (Built dynamic library)
# -s -> Strip/Remove all symbol table and relocation information from the executable (optional, reduces size)
build:
	gcc -o bod.obj -c bod.c
	gcc -s -shared -o libbod.dll bod.obj

clean:
	-rm *.obj
	-rm *.dll