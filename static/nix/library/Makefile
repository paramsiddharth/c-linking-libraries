.PHONY: build clean

# .o -> Object
# .a -> Archive (Built static library)
build:
	gcc -o bod.o -c bod.c
	ar rcs libbod.a bod.o

clean:
	-rm *.o
	-rm *.a