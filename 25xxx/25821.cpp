#include <bits/stdc++.h>
#define int128 __int128
using namespace std;

vector<long long> keys;

int128 power(int128 base, int128 exp, int128 mod) {
  if (exp == 0) return 1;
  if (exp == 1) return base % mod;
  int128 half = power(base, exp/2, mod) % mod;
  if (exp % 2 == 0) return half * half % mod;
  return (half * half % mod) * base % mod;
}

bool miller_rabin(int128 n, int128 a) {
  int r = 0;
  int128 d = n-1;
  while (d % 2 == 0) {
    r++;
    d >>= 1;
  }

  int128 x = power(a, d, n);
  if (x == 1 || x == n-1) return true;
  for (int i=0; i<r-1; i++) {
    x = x * x % n;
    if (x == n-1) return true;
  }
  return false;
}

bool prime(int128 n) {
  int128 a[5] = {2, 3, 5, 7, 11};
  if (n <= 1) return false;
  if (n == 2 || n == 3) return true;
  if (n % 2 == 0) return false;

  for (int i=0; i<5; i++) {
    if (n == a[i]) return true;
    if (!miller_rabin(n, a[i])) return false;
  }
  return true;
}

void precomputate(void) {
  keys.push_back(2);
  keys.push_back(3);
  keys.push_back(5);
  keys.push_back(7);
  keys.push_back(11);

  string s;
  for (int i=3; i<=12; i++) {
    s = "";
    for (int j=0; j<i; j++) {
      s += '0';
    }
    for (int j=1; j<=9; j+=2) {
      s[0] = s[i-1] = j + '0';
      for (int k=0; k<=9; k++) {
        s[1] = s[i-2] = k + '0';
        for (int l=0; l<=9; l++) {
          if (i < 5) break;
          s[2] = s[i-3] = l + '0';
          for (int m=0; m<=9; m++) {
            if (i < 7) break;
            s[3] = s[i-4] = m + '0';
            for (int n=0; n<=9; n++) {
              if (i < 9) break;
              s[4] = s[i-5] = n + '0';
              for (int o=0; o<=9; o++) {
                if (i < 11) break;
                s[5] = s[i-6] = o + '0';
                if (prime(stoll(s))) keys.push_back(stoll(s));
              }
              if (keys.back() != stoll(s) && prime(stoll(s))) keys.push_back(stoll(s));
            }
            if (keys.back() != stoll(s) && prime(stoll(s))) keys.push_back(stoll(s));
          }
          if (keys.back() != stoll(s) && prime(stoll(s))) keys.push_back(stoll(s));
        }
        if (keys.back() != stoll(s) && prime(stoll(s))) keys.push_back(stoll(s));
      }
      if (keys.back() != stoll(s) && prime(stoll(s))) keys.push_back(stoll(s));
    }
  }

  sort(keys.begin(), keys.end());
}

void solve(void) {
  long long l, h;
  cin >> l >> h;

  int cnt = 0;
  for (int i=0; i<keys.size(); i++) {
    if (keys[i] > h) break;
    if (l <= keys[i] && keys[i] <= h) cnt++;
  }
  cout << cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  precomputate();
  solve();
  return 0;
}