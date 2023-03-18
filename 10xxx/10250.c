#include <stdio.h>

int main(void) {
	int t, h, w, n;

	scanf("%d", &t);
	for (int i=0; i<t; ++i) {
		scanf("%d %d %d", &h, &w, &n);
		if ((n-1)/h+1 >= 10)  printf("%d%d\n", (n-1)%h+1, (n-1)/h+1); 
		else                  printf("%d0%d\n", (n-1)%h+1, (n-1)/h+1); 
	}
	return 0;
}