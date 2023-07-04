#include <stdio.h>

int main(void) {
  int n, a[250];

  for (int i=1; i<=250; i++) {
    a[i] = i*i;
  }

  scanf("%d", &n);

  for (int i=0; i<250; i++) {
    if (a[i] < n) continue;
    if (a[i] > n) break;
    printf("1");
    return 0;
  }

  for (int i=0; i<250; i++) {
    for (int j=0; j<250; j++) {
      if (a[i] + a[j] < n) continue;
      if (a[i] + a[j] > n) break;
      printf("2");
      return 0;
    }
  }

  for (int i=0; i<250; i++) {
    for (int j=0; j<250; j++) {
      for (int k=0; k<250; k++) {
        if (a[i] + a[j] + a[k] < n) continue;
        if (a[i] + a[j] + a[k] > n) break;
        printf("3");
        return 0;
      }
    }
  }

  for (int i=0; i<250; i++) {
    for (int j=0; j<250; j++) {
      for (int k=0; k<250; k++) {
        for (int l=0; l<250; l++) {
          if (a[i] + a[j] + a[k] + a[l] < n) continue;
          if (a[i] + a[j] + a[k] + a[l] > n) break;
          printf("4");
          return 0;
        }
      }
    }
  }
}