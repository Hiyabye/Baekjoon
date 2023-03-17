#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void bubbleSort(int arr[], int size) {
  for (int i=0; i<size; i++)
    for (int j=i; j<size; j++)
      if (arr[i] > arr[j])
        swap(&arr[i], &arr[j]);
}

int main(void) {
  int arr[5];
  int sum = 0;

  for (int i=0; i<5; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  bubbleSort(arr, 5);
  printf("%d\n%d", sum/5, arr[2]);
  return 0;
}