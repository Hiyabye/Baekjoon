#include <stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);
	for (int a=1; a<=n; a++) {
		int b = n-a;
		for (int i=0; i<b; i++) printf(" ");
		for (int i=0; i<a; i++) printf("*");
		printf("\n");
	}
	return 0;
}