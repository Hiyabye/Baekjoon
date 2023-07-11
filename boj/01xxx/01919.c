#include <stdio.h>
#include <string.h>

int check(char *s, char *t) {
  int cnt[26];
  for (int i=0; i<26; i++) {
    cnt[i] = 0;
  }

  for (int i=0; i<strlen(s); i++) {
    cnt[s[i]-'a']++;
  }
  for (int i=0; i<strlen(t); i++) {
    cnt[t[i]-'a']--;
  }

  int sum = 0;
  for (int i=0; i<26; i++) {
    sum += cnt[i] > 0 ? cnt[i] : -cnt[i];
  }
  return sum;
}

int main(void) {
  char s[1001], t[1001];

  scanf("%s", s);
  scanf("%s", t);
  printf("%d", check(s, t));
  return 0;
}