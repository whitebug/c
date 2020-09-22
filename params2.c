#include <stdio.h>
int main(int argc, char **argv)
{
	/*we need skip the program's name*/
	argv++;
	while(*argv) {
		printf("[%s]\n", *argv);
		argv++;
	}
	return 0;
}
