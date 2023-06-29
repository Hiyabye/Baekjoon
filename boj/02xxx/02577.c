#include <stdio.h>

int main(void) {
	int a, b, c, num;
	int digit[10] = { 0 };

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	num = a*b*c;
	while (num > 0) {
		digit[num%10]++;
		num /= 10;
	}

	for (int i=0; i<10; i++)
		printf("%d\n", digit[i]);
	return 0;
}