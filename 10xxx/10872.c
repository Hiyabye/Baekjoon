#include <stdio.h>

int main(void) {
	int n, result = 1;

	scanf("%d", &n);
	while (n > 0) {
		result *= n;
		n--;
	}
	printf("%d", result);
}