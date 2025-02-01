#include <iostream>
#include <vector>
using namespace std;

inline bool check(const vector<long long> &v, long long x, int l, int r) {
  if (l > r) return false;
  int m = (l + r) / 2;
  if (v[m] == x) return true;
  if (v[m] > x) return check(v, x, l, m-1);
  return check(v, x, m+1, r);
}

void solve(void) {
  long long n, m, a, c, x0; cin >> n >> m >> a >> c >> x0;
  vector<long long> v(n); v[0] = (a * x0 + c) % m;
  for (int i=1; i<n; i++) v[i] = (a * v[i-1] + c) % m;

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (check(v, v[i], 0, n-1)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}