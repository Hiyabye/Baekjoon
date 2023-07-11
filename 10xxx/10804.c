#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void reverse(int a[], int l, int r) {
  for (int i=0; i<(r-l+1)/2; i++) {
    swap(&a[l+i], &a[r-i]);
  }
}

int main(void) {
  int l, r;
  int a[20];

  for (int i=0; i<20; i++) {
    a[i] = i+1;
  }

  for (int i=0; i<10; i++) {
    scanf("%d %d", &l, &r);
    reverse(a, l-1, r-1);
  }

  for (int i=0; i<20; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}