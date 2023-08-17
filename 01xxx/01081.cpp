#include <bits/stdc++.h>
using namespace std;

long long f(long long n) {
  long long l = 1, r = n, k = 1;
  vector<long long> cnt(10, 0);

  while (l <= r) {
    while (r % 10 != 9 && l <= r) {
      int tmp = r;
      while (tmp) {
        cnt[tmp%10] += k;
        tmp /= 10;
      }
      r--;
    }
    if (l > r) break;

    while (l % 10 != 0 && l <= r) {
      int tmp = l;
      while (tmp) {
        cnt[tmp%10] += k;
        tmp /= 10;
      }
      l++;
    }
    l /= 10, r /= 10;

    for (int i=0; i<10; i++) {
      cnt[i] += (r-l+1)*k;
    }
    k *= 10;
  }

  long long ret = 0;
  for (int i=0; i<=9; i++) {
    ret += cnt[i]*i;
  }
  return ret;
}

void solve(void) {
  long long l, u;
  cin >> l >> u;
  cout << f(u) - f(l-1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}