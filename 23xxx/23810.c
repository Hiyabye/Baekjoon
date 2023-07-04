#include <stdio.h>

void solve(int n) {
  for (int i=0; i<n; i++) {
    for (int j=0; j<n*5; j++) printf("@");
    printf("\n");
  }
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++)  printf("@");
    printf("\n");
  }
  for (int i=0; i<n; i++) {
    for (int j=0; j<n*5; j++) printf("@");
    printf("\n");
  }
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++)  printf("@");
    printf("\n");
  }
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++)  printf("@");
    printf("\n");
  }
}

int main(void) {
  int n;

  scanf("%d", &n);
  solve(n);
  return 0;
}