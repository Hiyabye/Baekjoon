#include <stdio.h>

int main(void) {
	int t = 0, r = 0;
	char s[21] = { '\0' };

	scanf("%d", &t);
	for (int i=0; i<t; i++) {
		scanf("%d %s", &r, s);
		for (int j=0; s[j] != '\0'; j++)
			for (int k=0; k<r; k++)
				printf("%c", s[j]);
		printf("\n");
	}
	return 0;
}