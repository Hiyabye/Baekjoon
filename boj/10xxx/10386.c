#include <stdio.h>

typedef struct fraction {
  long long nu; // numerator
  long long de; // denominator
} fraction;

long long ab(long long n) {
  return n < 0 ? -n : n;
}

long long gcd(long long a, long long b) {
  if (a < b) return gcd(b, a);
  if (b == 0) return a;
  return gcd(b, a % b);
}

fraction add(fraction f1, fraction f2) {
  fraction f = {f1.nu*f2.de+f2.nu*f1.de, f1.de*f2.de};
  long long g = gcd(ab(f.nu), ab(f.de));
  return (fraction){f.nu/g, f.de/g};
}

fraction subtract(fraction f1, fraction f2) {
  fraction f = {f1.nu*f2.de-f2.nu*f1.de, f1.de*f2.de};
  long long g = gcd(ab(f.nu), ab(f.de));
  return (fraction){f.nu/g, f.de/g};
}

fraction multiply(fraction f1, fraction f2) {
  fraction f = {f1.nu*f2.nu, f1.de*f2.de};
  long long g = gcd(ab(f.nu), ab(f.de));
  return (fraction){f.nu/g, f.de/g};
}

fraction divide(fraction f1, fraction f2) {
  fraction f = {f1.nu*f2.de, f1.de*f2.nu};
  long long g = gcd(ab(f.nu), ab(f.de));
  return (fraction){f.nu/g, f.de/g};
}

fraction reverse(fraction f) {
  return (fraction){f.de, f.nu};
}

void print(fraction f) {
  long long tmp;

  if (((f.nu < 0 && f.de > 0) || (f.nu > 0 && f.de < 0)) && f.de != 1 && f.de != -1) {
    tmp = f.nu / f.de - 1;
    f.nu -= tmp * f.de;
    printf("%lld", tmp);
    if (f.nu != 0) printf(" ");
    f = reverse(f);
  } else {
    tmp = f.nu / f.de;
    f.nu -= tmp * f.de;
    printf("%lld", tmp);
    if (f.nu != 0) printf(" ");
    f = reverse(f);
  }

  while (f.de != 0) {
    long long tmp = f.nu / f.de;
    f.nu -= tmp * f.de;
    printf("%lld", tmp);
    if (f.nu != 0) printf(" ");
    f = reverse(f);
  }
  printf("\n");
}

void solve(int n1, int n2) {
  long long r1[9], r2[9], tmp;
  fraction f1, f2;

  for (int i=0; i<n1; i++) scanf("%lld", &r1[i]);
  f1 = (fraction){r1[n1-1], 1};
  for (int i=n1-2; i>=0; i--) {
    f1 = reverse(f1);
    f1 = add(f1, (fraction){r1[i], 1});
  }

  for (int i=0; i<n2; i++) scanf("%lld", &r2[i]);
  f2 = (fraction){r2[n2-1], 1};
  for (int i=n2-2; i>=0; i--) {
    f2 = reverse(f2);
    f2 = add(f2, (fraction){r2[i], 1});
  }

  print(add(f1, f2));
  print(subtract(f1, f2));
  print(multiply(f1, f2));
  print(divide(f1, f2));
}

int main(void) {
  int n1, n2;
  int idx = 0;

  scanf("%d %d", &n1, &n2);
  while (!(n1 == 0 && n2 == 0)) {
    printf("Case %d:\n", ++idx);
    solve(n1, n2);
    scanf("%d %d", &n1, &n2);
  }
  return 0;
}