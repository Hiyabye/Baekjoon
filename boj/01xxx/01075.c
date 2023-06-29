#include <stdio.h>

int main(void) {
	int i, n, f, h;

	scanf("%d\n%d", &n, &f);
	h = n/100;
	for (i=0; i<100; i++) {
		if ((100*h+i)%f == 0)
			break;
	}
	if (i < 10)
		printf("0%d", i);
	else if (i>=10 && i<=100)
		printf("%d", i);
  return 0;
}