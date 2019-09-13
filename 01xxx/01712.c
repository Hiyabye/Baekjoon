#include <stdio.h>
#include <math.h>

int main(void) {
	int a, b, c, count;
	
	scanf("%d %d %d", &a, &b, &c);
	if (b == c) {
		printf("-1");
		return 0;
	}

	count = ceil(a/(c-b));
	if (a/(c-b)%1 == 0) count++;
	if (count <= 0) count = -1;
	
	if (count > 0)  printf("%d", count);
	else            printf("-1");
	return 0;
}