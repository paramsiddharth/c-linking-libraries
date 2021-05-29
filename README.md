# Linking Libraries in C
Examples of static and Dynamic linking of libraries in C,
plus how to create such libraries.

## Notes
-	The examples container here strictly use GCC as the
	compiler. For *NIX use the general GNU distribution
	of GCC, and for Windows, use MinGW-w64.
-	The `-s` flag is used extensively throughout the examples
	in this repository, but it must be noted that it is totally
	optional and used here only to reduce the output filesize by
	removing all symbol table and relocation information.

## Instructions
For different types of linking, I have made:
1. `static`: Static Linking.
2. `dynamic`: Dynamic Linking.

Within each, I have added examples for *NIX and Windows:
1. `nix`: *NIX.
2. `win`: Windows.

Each of the two contains a `Makefile` with a simple
instruction to clean all files built.

Within each of those two, I have created:
1. `library`: The library source code and `Makefile`.
2. `usage`: A simple usage of the same, with the `Makefile`.

The `Makefile`s within those two directories contain a default `build` instruction to compile the code, and
a `clean` instruction to clean all files `built`.

## Information
-	The source code used for the sample library and the
	testing file is container inside `src` in the repository's
	root. The source files are symbolically linked into the
	desired places, so please ensure you have enabled symbolic
	links in Git before cloning.
	```bash
	git config --global core.symlinks true
	```
-	In Windows systems, this would also require you to clone via
	a console with administrative priviledges, because creating
	symbolic links would require them.
-	Git won't warn you if you clone without giving
	administrative privileges: It will simply create copies
	of files instead of symbolcally linking them,
	even if you have the global `core.symlinks` set to
	`true`. This would
	still allow everything to work, but if you need to edit,
	for example, `main.c`, the changes won't reflect everywhere
	`main.c` is being used.
-	To enforce symbolic links while creating the clone,
	use
	```bash
	git clone -c core.symlinks=true https://url/to/repo
	```
	You don't need to enforce this if you are running
	the command-line with administrative privileges.
-	If you have Developer Mode enabled in Windows 10,
	you won't need to grant administrative privileges for
	using symbolic links.

# Made with ❤ by [Param](https://www.paramsid.com).