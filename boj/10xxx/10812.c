#include <stdio.h>

void reverse(int arr[], int i, int j, int k) {
  int tmp[k-i];

  for (int a=i; a<k; a++)   tmp[a-i] = arr[a];
  for (int a=k; a<=j; a++)  arr[a-k+i] = arr[a];
  for (int a=0; a<k-i; a++) arr[a+j-k+i+1] = tmp[a];
}

int main(void) {
  int n, m, i, j, k;
  int arr[100];

  scanf("%d %d", &n, &m);
  for (int a=0; a<n; a++)
    arr[a] = a+1;

  for (int a=0; a<m; a++) {
    scanf("%d %d %d", &i, &j, &k);
    reverse(arr, i-1, j-1, k-1);
  }
  
  for (int a=0; a<n; a++)
    printf("%d ", arr[a]);
  return 0;
}