#include <stdio.h>

int matrix[40][5][5];
int result[5][5];

int floorLogTwo(long long b) {
  int pow = 0;

  while (b > 0) {
    b /= 2;
    pow++;
  }
  return pow-1;
}

long long powTwo(int pow) {
  long long res = 1;
  for (int i=0; i<pow; i++) {
    res *= 2;
  }
  return res;
}

void matmul(int n, int a[5][5], int b[5][5], int c[5][5]) {
  int tmp[5][5];

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      tmp[i][j] = 0;
      for (int k=0; k<n; k++) {
        tmp[i][j] += a[i][k] * b[k][j];
      }
      tmp[i][j] %= 1000;
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      c[i][j] = tmp[i][j];
    }
  }
}

int main(void) {
  int n, pow;
  long long b;

  scanf("%d %lld", &n, &b);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      scanf("%d", &matrix[0][i][j]);
      result[i][j] = matrix[0][i][j];
    }
  }
  b--;

  for (int i=0; i<floorLogTwo(b)+1; i++) {
    matmul(n, matrix[i], matrix[i], matrix[i+1]);
  }

  while (b > 0) {
    pow = floorLogTwo(b);
    matmul(n, matrix[pow], result, result);
    b -= powTwo(pow);
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      printf("%d ", result[i][j]%1000);
    }
    printf("\n");
  }
  return 0;
}