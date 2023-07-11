#include <stdio.h>
#include <string.h>

typedef struct Student {
  char name[11];
  int korean;
  int english;
  int math;
} Student;

void merge(Student arr[], int l, int m, int r) {
  int i, j, k;
  int n1 = m-l+1;
  int n2 = r-m;
  Student L[n1], R[n2];

  for (i=0; i<n1; i++) L[i] = arr[l+i];
  for (j=0; j<n2; j++) R[j] = arr[m+1+j];

  i = 0, j = 0, k = l;
  while (i < n1 && j < n2) {
    if (L[i].korean > R[j].korean) arr[k++] = L[i++];
    else if (L[i].korean == R[j].korean && L[i].english < R[j].english) arr[k++] = L[i++];
    else if (L[i].korean == R[j].korean && L[i].english == R[j].english && L[i].math > R[j].math) arr[k++] = L[i++];
    else if (L[i].korean == R[j].korean && L[i].english == R[j].english && L[i].math == R[j].math && strcmp(L[i].name, R[j].name) < 0) arr[k++] = L[i++];
    else arr[k++] = R[j++];
  }

  while (i < n1) arr[k++] = L[i++];
  while (j < n2) arr[k++] = R[j++];
}

void mergeSort(Student arr[], int l, int r) {
  if (l < r) {
    int m = l+(r-l)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
  }
}

int main(void) {
  int n;
  Student s[100000];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%s %d %d %d", s[i].name, &s[i].korean, &s[i].english, &s[i].math);
  }

  mergeSort(s, 0, n-1);

  for (int i=0; i<n; i++) {
    printf("%s\n", s[i].name);
  }
  return 0;
}