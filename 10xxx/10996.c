#include <stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);
	if (n == 1) printf("*");
	else {
		for (int i=0; i<n; i++) {
			if (n%2 == 0) {
				for (int j=0; j<n/2; j++)     printf("* ");
				printf("\n");
				for (int j=0; j<n/2; j++)     printf(" *");
				printf("\n");
			} else {
				for (int j=0; j<(n+1)/2; j++) printf("* ");
				printf("\n");
				for (int j=0; j<(n-1)/2; j++) printf(" *");
				printf("\n");
			}
		}
	}
	return 0;
}