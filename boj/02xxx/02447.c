#include <stdio.h>

int main(void) {
	int n;
	
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			int dx = i, dy = j;
			while (dx) {
				if (dx%3==1 && dy%3==1) break;
				dx /= 3;
        dy /= 3;
			}
			putchar(dx ? ' ' : '*');
		}
		puts("");
	}
	return 0;
}