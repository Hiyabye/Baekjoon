#include <stdio.h>

int main(void) {
	int num, ten, one, b=0, i=0;

	scanf("%d", &num);
	int a = num;

	while (1) {
		if (a<10) ten = 0;
		else      ten = a/10;

		one = a%10;
		b = ten+one;
		i++;
		ten = a%10;
		one = b%10;
		a = (ten*10) + one;
		if (a == num)	break;
	}
	printf("%d", i);
	return 0;
}