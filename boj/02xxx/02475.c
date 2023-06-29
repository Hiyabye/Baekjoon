#include <stdio.h>

int main(void) {
	int num[5], sum = 0;
	
  for (int i=0; i<5; i++) {
		scanf("%d", &num[i]);
		sum += num[i]*num[i];
	}
	printf("%d", sum%10);
	return 0;
}