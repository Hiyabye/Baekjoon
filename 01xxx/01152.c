#include <stdio.h>
#include <string.h>

int main(void) {
	int count = 0;
	char str[1000001];
	char *token;
	const char seps[] = " \n";

	fgets(str, sizeof(str), stdin);
	token = strtok(str, seps);
	while (token != NULL) {
		count++;
		token = strtok(NULL, seps);
	}
	printf("%d", count);
	return 0;
}