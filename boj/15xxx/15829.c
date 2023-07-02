#include <stdio.h>

#define R 31
#define MOD 1234567891

long long int r_power(long long int i) {
  if (i == 0) return 1;
  if (i == 1) return R;
  
  long long int tmp = r_power(i/2);
  tmp = tmp * tmp % MOD;
  if (i%2 == 0) return tmp;
  return tmp * R % MOD;
}

int main(void) {
  int l;
  char s[51];
  long long int hash = 0;

  scanf("%d", &l);
  scanf("%s", s);
  for (int i=0; i<l; i++) {
    hash += (s[i]-'a'+1) * r_power(i);
    hash %= MOD;
  }
  printf("%lld", hash);
  return 0;
}