.PHONY: build clean

# .obj -> Object
# .lib -> Library (Built static library)
build:
	gcc -o bod.obj -c bod.c
	ar rcs libbod.lib bod.obj

clean:
	-rm *.obj
	-rm *.lib