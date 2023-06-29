#include <stdio.h>

int gcd(int a, int b) {
	int gcd=1;

	for (int i=1; i<a*b; i++)
		if (a%i==0 && b%i==0)
			gcd = i;

	return gcd;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main(void) {
	int a, b;
  
	scanf("%d %d", &a, &b);
	printf("%d\n%d", gcd(a, b), lcm(a, b));
	return 0;
}