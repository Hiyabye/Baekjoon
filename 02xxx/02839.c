#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(void) {
	int n, three = 0, five = 0, possible = TRUE;

	scanf("%d", &n);
	while (n >= 5) {
		n -= 5;
		five++;
	}
	while (n >= 3) {
		n -= 3;
		three++;
	}
	
	while (n != 0) {
		if (five == 0) {
			possible = FALSE;
			break;
		}
		n += 5;
		five--;
		if (n >= 6) {
			n -= 6;
			three += 2;
		} else if (n >= 3) {
			n -= 3;
			three++;
		}
	}

	if (possible == TRUE) printf("%d", three + five);
	else                  printf("-1");
	return 0;
}