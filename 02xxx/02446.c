#include <stdio.h>

int main(void) {
	int n;
	
	scanf("%d", &n);
	for (int i=n; i>1; i--) {
		for (int j=0; j<n-i; j++)   printf(" ");
		for (int j=i*2-1; j>0; j--) printf("*");
		printf("\n");
	}
	for (int i=1; i<=n; i++) {
		for (int j=0; j<n-i; j++)   printf(" ");
		for (int j=i*2-1; j>0; j--) printf("*");
		printf("\n");
	}
	return 0;
}