#include <stdio.h>

int main(void) {
	int a, b, c, d, e, f;

	scanf("%1d%1d%1d", &a, &b, &c);
  scanf("%1d%1d%1d", &d, &e, &f);
	int thr = 100*a*f + 10*b*f + c*f;
	int fou = 100*a*e + 10*b*e + c*e;
	int fiv = 100*a*d + 10*b*d + c*d;
	int six = 100*fiv + 10*fou + thr;
	printf("%d\n%d\n%d\n%d", thr, fou, fiv, six);
	return 0;
}