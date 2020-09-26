#include <stdio.h>

int main()
{
	enum colors {red, blue } color;
	color = blue;
	printf("%d", color);
	return 0;
}

