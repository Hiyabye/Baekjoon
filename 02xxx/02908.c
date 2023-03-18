#include <stdio.h>

int main(void) {
	int a, b, num[3];

	scanf("%d", &a);
	scanf("%d", &b);

	for (int i=0; i<3; i++) {
		num[i] = a%10;
		a /= 10;
	}
	for (int i=0; i<3; i++) {
		a += num[i];
		if (i != 2) a *= 10;
	}

	for (int i=0; i<3; i++) {
		num[i] = b%10;
		b /= 10;
	}
	for (int i=0; i<3; i++) {
		b += num[i];
		if (i != 2) b *= 10;
	}

	if (a > b)  printf("%d", a);
	else        printf("%d", b);
	return 0;
}