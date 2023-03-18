#include <stdio.h>

struct dot {
  int x;
  int y;
};

void merge(struct dot d[], int l, int m, int r) {
  int i, j, k; 
  int n1 = m-l+1;
  int n2 = r-m; 
  struct dot L[n1], R[n2];
  
  for (i=0; i<n1; i++) {
    L[i].x = d[l+i].x;
    L[i].y = d[l+i].y;
  }
  for (j=0; j<n2; j++) {
    R[j].x = d[m+1+j].x;
    R[j].y = d[m+1+j].y;
  }

  i=0, j=0, k=l;
  while (i<n1 && j<n2) { 
    if (L[i].y < R[j].y) { 
      d[k].x = L[i].x; 
      d[k].y = L[i].y; 
      i++;
    } else if (L[i].y == R[j].y) {
      if (L[i].x <= R[j].x) {
        d[k].x = L[i].x;
        d[k].y = L[i].y;
        i++;
      } else {
        d[k].x = R[j].x;
        d[k].y = R[j].y;
        j++;
      }
    } else { // L[i].y < R[j].y
      d[k].x = R[j].x; 
      d[k].y = R[j].y; 
      j++; 
    }
    k++; 
  } 
  
  while (i < n1) { 
    d[k].x = L[i].x;
    d[k].y = L[i].y;
    i++, k++; 
  } 
  
  while (j < n2) { 
    d[k].x = R[j].x; 
    d[k].y = R[j].y; 
    j++, k++; 
  } 
}

void mergeSort(struct dot d[], int l, int r) {
  if (l < r) {
    int m = l+(r-l)/2;

    mergeSort(d, l, m);
    mergeSort(d, m+1, r);
    merge(d, l, m, r);
  }
}

int main(void) {
  int n;
  struct dot d[100001];

  scanf("%d", &n);
  for (int i=0; i<n; i++)
    scanf("%d %d", &d[i].x, &d[i].y);

  mergeSort(d, 0, n-1);

  for (int i=0; i<n; i++)
    printf("%d %d\n", d[i].x, d[i].y);
  return 0;
}