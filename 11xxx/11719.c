#include <stdio.h>

int main(void) {
	char c;

	while (scanf("%c", &c) != EOF)
		printf("%c", c);
	return 0;
}