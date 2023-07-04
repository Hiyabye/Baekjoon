#include <stdio.h>

void solve(int n) {
  // Top line
  for (int i=0; i<n; i++) printf("*");
  for (int i=0; i<2*n-3; i++) printf(" ");
  for (int i=0; i<n; i++) printf("*");
  printf("\n");

  // Top half
  for (int i=0; i<n-2; i++) {
    for (int j=0; j<i+1; j++) printf(" ");
    printf("*");
    for (int j=0; j<n-2; j++) printf(" ");
    printf("*");
    for (int j=0; j<2*n-5-2*i; j++) printf(" ");
    printf("*");
    for (int j=0; j<n-2; j++) printf(" ");
    printf("*");
    printf("\n");
  }

  // Middle line
  for (int i=0; i<n-1; i++) printf(" ");
  printf("*");
  for (int i=0; i<n-2; i++) printf(" ");
  printf("*");
  for (int i=0; i<n-2; i++) printf(" ");
  printf("*");
  printf("\n");

  // Bottom half
  for (int i=0; i<n-2; i++) {
    for (int j=0; j<n-2-i; j++) printf(" ");
    printf("*");
    for (int j=0; j<n-2; j++) printf(" ");
    printf("*");
    for (int j=0; j<2*i+1; j++) printf(" ");
    printf("*");
    for (int j=0; j<n-2; j++) printf(" ");
    printf("*");
    printf("\n");
  }

  // Bottom line
  for (int i=0; i<n; i++) printf("*");
  for (int i=0; i<2*n-3; i++) printf(" ");
  for (int i=0; i<n; i++) printf("*");
  printf("\n");
}

int main(void) {
  int n;

  scanf("%d", &n);
  solve(n);
  return 0;
}