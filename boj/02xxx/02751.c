#include <stdio.h>

void merge(int num[], int l, int m, int r) {
  int i, j, k;
  int n1 = m-l+1;
  int n2 = r-m;
  int L[n1], R[n2];
  
  for (i=0; i<n1; i++)
    L[i] = num[l+i];
  for (j=0; j<n2; j++)
    R[j] = num[m+1+j];
  
  i = 0, j = 0, k = l;

  while (i<n1 && j<n2) {
    if (L[i] <= R[j]) {
      num[k] = L[i];
      i++;
    } else {
      num[k] = R[j];
      j++;
    }
    k++;
  }
  
  while (i < n1) {
    num[k] = L[i];
    i++, k++;
  }
  
  while (j < n2) {
    num[k] = R[j];
    j++, k++;
  }
}

void mergeSort(int num[], int l, int r) {
  if (l < r) { 
    int m = l+(r-l)/2;
  
    mergeSort(num, l, m); 
    mergeSort(num, m+1, r); 
    merge(num, l, m, r); 
  } 
}

int main(void) {
  int n, num[1000001];

  scanf("%d", &n);
  for (int i=0; i<n; i++)
    scanf("%d", &num[i]);

  mergeSort(num, 0, n-1);

  for (int i=0; i<n; i++)
    printf("%d\n", num[i]);
  return 0;
}