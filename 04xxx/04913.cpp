#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline vector<bool> sieve(int n) {
  vector<bool> ret(n+1, true);
  ret[0] = ret[1] = false;
  for (int i=2; i*i<=n; i++) {
    if (!ret[i]) continue;
    for (int j=i*i; j<=n; j+=i) ret[j] = false;
  }
  return ret;
}

inline vector<int> precompute1(int n, const vector<bool> &p) {
  vector<int> ret(n+1, 0);
  for (int i=1; i<=n; i++) ret[i] = ret[i-1] + p[i];
  return ret;
}

inline vector<int> precompute2(int n, const vector<bool> &p) {
  vector<int> ret(n+1, 0);
  for (int i=1; i<=n; i++) ret[i] = ret[i-1] + (p[i] && (i == 2 || i % 4 == 1));
  return ret;
}

bool solve(const vector<int> &a, const vector<int> &b) {
  int l, u; cin >> l >> u;
  if (l == -1 && u == -1) return false;

  cout << l << " " << u << " ";
  l = max(1, l); u = max(1, u);
  cout << a[u] - a[l-1] << " " << b[u] - b[l-1] << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<bool> p = sieve(1000000);
  vector<int> a = precompute1(1000000, p);
  vector<int> b = precompute2(1000000, p);

  while (solve(a, b));
  return 0;
}