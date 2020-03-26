#include <stdio.h>
int main(void) {
	int num, min, sum = -50;

  scanf("%d", &min);
	for (int i=1; i<3; i++) {
		scanf("%d", &num);
		if (num < min) min = num;
	}
	sum += min;

  scanf("%d", &min);
	for (int i=1; i<2; i++) {
		scanf("%d", &num);
		if (num < min) min = num;
	}
	sum += min;

	printf("%d", sum);
}