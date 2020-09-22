#include <stdio.h>

int main()
{
	printf("[%5d]\n", 12);
	printf("[%-5d]\n", 12);
	printf("[%05d]\n", 12);
	printf("[%+5d]\n", 12);
	printf("[% d], [% d]\n", 12, -3);
	printf("[%7.5s]\n", "abrakadabra");
	printf("[%-7.5s]\n", "abrakadabra");
	printf("[%6.4d]\n", 12);
	return 0;
}
