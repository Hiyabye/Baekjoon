#include <stdio.h>

int main(void) {
	int a = 1, d = 1, num[8];

	for (int i=0; i<8; i++)
		scanf("%d", &num[i]);

	for (int i=0; i<8; i++) {
		if (a==0 && d==0) break;
		if (num[i] != i+1) a = 0;
		if (num[i] != 8-i) d = 0;
	}

	if (a == 1)       printf("ascending");
	else if (d == 1)  printf("descending");
	else              printf("mixed");
	return 0;
}