#include <stdio.h>

int main(void) {
	int a, b, c;

	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	b += c;
	while (b >= 60) {
		b -= 60;
		a++;
	}
	while (a >= 24)
		a -= 24;

	printf("%d %d", a, b);
	return 0;
}