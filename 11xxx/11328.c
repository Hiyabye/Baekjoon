#include <stdio.h>
#include <string.h>

int check(char *s, char *t) {
  if (strlen(s) != strlen(t)) return 0;

  int cnt[26];
  for (int i=0; i<26; i++) {
    cnt[i] = 0;
  }

  for (int i=0; i<strlen(s); i++) {
    cnt[s[i]-'a']++;
    cnt[t[i]-'a']--;
  }

  for (int i=0; i<26; i++) {
    if (cnt[i] != 0) return 0;
  }
  return 1;
}

int main(void) {
  int n;
  char s[1001], t[1001];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%s %s", s, t);
    if (check(s, t)) printf("Possible\n");
    else printf("Impossible\n");
  }
  return 0;
}