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

The source code used for the sample library and the
testing file is container inside `src` in the repository's
root. The source files are symbolically linked into the
desired places, so please ensure you have enabled symbolic
links in Git before cloning.
```bash
git config --global core.symlinks true
```

# Made with ❤ by [Param](https://www.paramsid.com).