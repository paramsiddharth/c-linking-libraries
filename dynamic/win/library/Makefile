.PHONY: build clean

# .obj -> Object
# .dll -> Dynamic Link Library (Built dynamic library)
build:
	gcc -o bod.obj -c bod.c
	gcc -shared -o libbod.dll bod.obj

clean:
	-rm *.obj
	-rm *.dll