#include <stdio.h>

int main(void) {
	int n, x, num, count = 0, a[10001];

	scanf("%d %d", &n, &x);
	for (int i=0; i<n; i++) {
		scanf("%d", &num);
		if (num < x) {
			a[count] = num;
			count++;
		}
	}

	for (int i=0; i<count; i++)
		printf("%d ", a[i]);
	return 0;
}