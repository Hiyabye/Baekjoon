#include <stdio.h>

int main(void) {
	int i, n, sum = 0;
	
	scanf("%d", &n);	
	for (i=1; ; i++) {
		sum += i;
		if (sum >= n) break;
	}

	sum = i;
	for (i=1; i<sum; i++)
		n -= i;
	
	if ((sum+1)%2 == 0) printf("%d/%d", sum-n+1, n);
	else                printf("%d/%d", n, sum-n+1);
	return 0;
}