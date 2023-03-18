#include <stdio.h>

int main(void) {
	int n, num, min, max;

	scanf("%d", &max);
  min = max;
	for (int i=1; i<n; i++) {
		scanf("%d", &num);
		if (num < min) min = num;
		if (num > max) max = num;
	}
	printf("%d", max-min);
	return 0;
}