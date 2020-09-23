#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Please add filename\n");
		return 1;
	}

	FILE *f;
	f = fopen(argv[1], "r");
	if(!f) {
		perror(argv[1]);
		exit(2);
	} else {
		printf("we have opened the file '%s'\n", argv[1]);
	}
	return 0;
}
