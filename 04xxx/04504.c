#include <stdio.h>

int main(void) {
	int n, num;
	
	scanf("%d", &n);
	scanf("%d", &num);	
	while (num != 0) {
    if (num%n == 0) printf("%d is a multiple of %d.\n", num, n);
    else            printf("%d is NOT a multiple of %d.\n", num, n);
		scanf("%d", &num);
	}
	return 0;
}