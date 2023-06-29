#include <stdio.h>
#include <stdlib.h>

typedef struct Person {
  int age;
  char name[101];
  int id;
} Person;

void merge(Person arr[], int l, int m, int r) {
  int i, j, k;
  int n1 = m-l+1;
  int n2 = r-m;
  Person L[n1], R[n2];

  for (i=0; i<n1; i++) L[i] = arr[l+i];
  for (j=0; j<n2; j++) R[j] = arr[m+1+j];

  i = 0, j = 0, k = l;
  while (i < n1 && j < n2) {
    if ((L[i].age < R[j].age) || (L[i].age == R[j].age && L[i].id < R[j].id))
      arr[k++] = L[i++];
    else
      arr[k++] = R[j++];
  }

  while (i < n1) arr[k++] = L[i++];
  while (j < n2) arr[k++] = R[j++];
}

void mergeSort(Person arr[], int l, int r) {
  if (l < r) {
    int m = l+(r-l)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
  }
}

int main(void) {
  int n;
  Person *p;

  scanf("%d", &n);
  p = (Person*)malloc(sizeof(Person)*n);

  for (int i=0; i<n; i++) {
    scanf("%d %s", &p[i].age, p[i].name);
    p[i].id = i;
  }

  mergeSort(p, 0, n-1);

  for (int i=0; i<n; i++) {
    printf("%d %s\n", p[i].age, p[i].name);
  }

  free(p);
  return 0;
}