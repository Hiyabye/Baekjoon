#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void bubbleSort(int digit[], int size) {
  for (int i=0; i<size; i++) {
    for (int j=0; j<size-1; j++) {
      if (digit[j] > digit[j+1])
      swap(&digit[j], &digit[j+1]);
    }
  }
}

int main(void) {
	int input, digit[10], size=0;
	
	scanf("%d", &input);
	for (int i=0; i<10; i++) {
		if (input < 10) {
			digit[i] = input;
			size++;
			break;
		} else {
			digit[i] = input%10;
			input /= 10;
			size++;
		}
	}
	
	bubbleSort(digit, size);
	for (int i=size-1; i>=0; i--)
		printf("%d", digit[i]);	
	return 0;
}