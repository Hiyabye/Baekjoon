#include <stdio.h>

int primeCheck(int n) {
	if (n == 1) return 0;
	if (n == 2) return 1;

	for (int i=2; i<n; i++)
		if (n%i == 0) return 0;
	return 1;
}


int main(void){
	int n, num, count = 0;
	
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &num);
		if (primeCheck(num) == 1) count++;
	}
	printf("%d", count);
	return 0;
}