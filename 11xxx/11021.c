#include <stdio.h>

int main(void) {
	int t, a, b;

	scanf("%d", &t);
	for (int i=0; i<t; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i+1, a+b);
	}
	return 0;
}