#include <stdio.h>

int getDividedSum(int n) {
	int i, size = 0, sum = n;
	int num[8];

	while (n > 0) {
		num[size] = n%10;
		n /= 10;
		size++;
	}
	for (i=0; i<size; i++)
		sum += num[i];
	return sum;
}

int main(void) {
	int i, n, ans = 0;
	
	scanf("%d", &n);
	for (i=n-54; i<=n; i++) {
		if (getDividedSum(i) == n) {
			ans = i;
			break;
		}
	}
	printf("%d", ans);
	return 0;
}