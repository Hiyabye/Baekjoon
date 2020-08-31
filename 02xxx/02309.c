#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void bubbleSort(int arr[], int n) {
  for (int i=0; i<n; i++) {
    for (int j=0; j<n-i-1; j++) {
      if (arr[j] > arr[j+1]) {
        swap(&arr[j], &arr[j+1]);
      }
    }
  }
}

int main(void) {
  int a, b, go, nineSum = 0;
  int nine[10], seven[8];

  for (int i=0; i<9; i++) {
    scanf("%d", &nine[i]);
    nineSum += nine[i];
  }

  go = 1;
  for (int i=0; i<8; i++) {
    if (go == 0) break;
    for (int j=i+1; j<9; j++) {
      if (go == 0) break;
      a = nine[i], b = nine[j];
      if (a+b == nineSum-100) go = 0;
    }
  }

  for (int i=0, j=0; i<9; i++) {
    if (nine[i]==a || nine[i]==b) continue;
    seven[j] = nine[i];
    j++;
  }

  bubbleSort(seven, 7);
  for (int i=0; i<7; i++)
    printf("%d\n", seven[i]);
}