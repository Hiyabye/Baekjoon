#include <stdio.h>

int main(void) {
	int i, n, count = 0;

	scanf("%d", &n);

	// Every number between 1 and 99 is true
	if (n >= 100) count += 99;
	else count += n;

	// Check numbers between 100 and 1000
	for (i=100; i<1000; i++) {
		if (n >= i) {
			if (((i/10)%10)-(i%10)==(i/100)-((i/10)%10))
				count++;
		}
		else break;
	}
  
	printf("%d", count);
	return 0;
}