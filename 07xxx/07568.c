#include <stdio.h>

struct person {
  int w; // weight
  int h; // height
  int r; // rank
};

int main(void) {
  int n;
  struct person p[51];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d %d", &p[i].w, &p[i].h);
    p[i].r = 1;
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (i == j) continue;
      if (p[i].h>p[j].h && p[i].w>p[j].w) p[j].r++;
    }
  }

  for (int i=0; i<n; i++)
    printf("%d ", p[i].r);
  return 0;
}