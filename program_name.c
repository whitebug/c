#include <stdio.h>
int main(int argc, char **argv)
{
	int result;
	result = printf("My name is %s\n", *argv);
	if(result != 0) {
		return 0;
	} else {
		return 1;
	}
}
