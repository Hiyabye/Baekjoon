#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(int x) {
  int ret = 0;
  while (x) ret += x % 10, x /= 10;
  return ret;
}

void solve(void) {
  int n; cin >> n;

  vector<long long> a(100, 0), b(100, 0);
  for (int i=1; i<=1e7; i++) {
    int x = calc(i);
    if (b[x]++ >= n) continue;
    a[x] += i;
  }

  long long ans = 1e18;
  for (int i=0; i<100; i++) {
    if (b[i] >= n) ans = min(ans, a[i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}