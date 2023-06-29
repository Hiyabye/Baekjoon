#include <stdio.h>
#include <string.h>

typedef struct Word {
  int len;
  char str[50];
} Word;

void swap(Word *a, Word *b) {
  Word tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(void) {
  int n;
  Word w[20000];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%s", w[i].str);
    w[i].len = strlen(w[i].str);
  }

  for (int i=0; i<n-1; i++) {
    for (int j=0; j<n-i-1; j++) {
      if ((w[j].len>w[j+1].len) || (w[j].len==w[j+1].len && strcmp(w[j].str, w[j+1].str)>0)) {
        swap(&w[j], &w[j+1]);
      }
    }
  }

  for (int i=0; i<n; i++) {
    if (i>0 && strcmp(w[i].str, w[i-1].str)==0) continue;
    printf("%s\n", w[i].str);
  }
  return 0;
}