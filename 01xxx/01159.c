#include <stdio.h>

int main(void) {
  int n, i, success = 0;
  int alpha[27] = { 0 };
  char name[31];

  scanf("%d", &n);
  for (i=0; i<n; i++) {
    scanf("%s", name);
    alpha[name[0]-'a']++;
  }

  for (i=0; i<26; i++) {
    if (alpha[i] >= 5) {
      printf("%c", i+'a');
      success = 1;
    }
  }
  if (success == 0) printf("PREDAJA");
  return 0;
}