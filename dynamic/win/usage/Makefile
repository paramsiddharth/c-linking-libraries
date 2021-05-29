.PHONY: build clean

# Copying libbod.dll to the current directory is needed for the above to work
build:
	gcc -o main.obj -c main.c -I"../library"
	gcc -o main.exe main.obj -L"../library" -lbod
	cp ../library/libbod.dll .

clean:
	-rm *.obj
	-rm *.dll
	-rm *.exe