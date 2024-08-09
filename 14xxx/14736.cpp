#include <algorithm>
#include <iostream>
using namespace std;

inline int calc(int k, int a, int t, int s) {
  int ret = 0;
  while (k) {
    for (int i=0; i<t && k; i++) k -= a, ret++;
    for (int i=0; i<s && k; i++) ret++;
  }
  return ret;
}

void solve(void) {
  int n, k, a; cin >> n >> k >> a;

  int ans = 1e9;
  while (n--) {
    int t, s; cin >> t >> s;
    ans = min(ans, calc(k, a, t, s));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}