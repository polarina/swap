#define _GNU_SOURCE
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if (argc != 3) {
		fprintf(stderr, "Usage: %s file1 file2\n", argv[0]);
		return EXIT_FAILURE;
	}

	int ok = renameat2(AT_FDCWD, argv[1], AT_FDCWD, argv[2], RENAME_EXCHANGE);

	if (ok != 0) {
		perror(argv[0]);
	}

	return ok == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}
