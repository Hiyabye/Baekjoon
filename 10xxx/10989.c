#include <stdio.h>

int main(void) {
	int n, num, arr[10000] = { 0 };

	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &num);
		arr[num-1]++;
	}

	for (int i=0; i<10000; i++)
		for (int j=0; j<arr[i]; j++)
			printf("%d\n", i+1);

	return 0;
}