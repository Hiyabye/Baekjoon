#include <iostream>
#include <utility>
#include <vector>
using namespace std;

inline long long calc(long long q, long long p, long long k, long long c) {
  long long n = (q-1) / k;
  return p + n * (n+1) / 2 * c;
}

void solve(void) {
  int n, q; cin >> n >> q;

  pair<int, long long> ans = {-1, 1e18};
  for (int i=1; i<=n; i++) {
    int p, k, c; cin >> p >> k >> c;
    if (calc(q, p, k, c) < ans.second) {
      ans = {i, calc(q, p, k, c)};
    }
  }
  cout << ans.first << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}