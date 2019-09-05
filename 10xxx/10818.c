#include <stdio.h>
int main(void) {
	int n, num, min, max;

	scanf("%d", &min);
  max = min;
	for (int i=1; i<n; i++) {
		scanf("%d", &num);
		if (num < min) min = num;
		if (num > max) max = num;
	}
	printf("%d %d", min, max);
}