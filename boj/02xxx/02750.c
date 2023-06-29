#include <stdio.h>

int swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void bubbleSort(int arr[], int n) {
	for (int i=0; i<n; i++)
		for (int j=0; j<n-i-1; j++)
			if (arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
}

int main(void) {
	int n, num[1001];

	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &num[i]);

	bubbleSort(num, n);

	for (int i=0; i<n; i++)
		printf("%d\n", num[i]);
	return 0;
}