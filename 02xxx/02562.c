#include <stdio.h>

int main(void) {
	int n, key = 0, max = 0;

	for (int i=0; i<9; i++) {
		scanf("%d", &n);
		if (n > max) {
			max = n;
			key = i+1;
		}
	}
	printf("%d\n%d", max, key);
	return 0;
}