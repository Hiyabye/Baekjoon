#include <stdio.h>

int main(void) {
	int kinds = 0, n[10], rest[42] = { 0 };

	for (int i=0; i<10; i++) {
		scanf("%d", &n[i]);
		rest[n[i]%42]++;
	}
	for (int i=0; i<42; i++) {
		if (rest[i] > 0)
			kinds++;
	}
	printf("%d", kinds);
	return 0;
}