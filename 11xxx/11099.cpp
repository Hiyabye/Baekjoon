#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using Matrix = vector<vector<long long>>;

inline Matrix matmul(const Matrix &a, const Matrix &b, long long lim) {
  Matrix c(a.size(), vector<long long>(b[0].size(), 0));
  for (int i=0; i<a.size(); i++) for (int j=0; j<b[0].size(); j++) for (int k=0; k<b.size(); k++) {
    c[i][j] = min(c[i][j] + a[i][k] * b[k][j], lim);
  }
  return c;
}

inline Matrix matpow(Matrix base, long long exp, long long lim) {
  Matrix ret(base.size(), vector<long long>(base.size(), 0));
  for (int i=0; i<base.size(); i++) ret[i][i] = 1;
  while (exp) {
    if (exp & 1) ret = matmul(ret, base, lim);
    base = matmul(base, base, lim);
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long n, l; cin >> n >> l;
  vector<vector<long long>> v(n+1, vector<long long>(n+1, 0));
  for (int i=0; i<n; i++) for (int j=0; j<=n; j++) cin >> v[i][j];
  v[n][n] = 1;

  long long lo = 1, hi = n*l+1;
  while (lo < hi) {
    long long mid = lo + (hi - lo) / 2;
    if (matpow(v, mid, l)[0][n] < l) lo = mid + 1;
    else hi = mid;
  }
  cout << (lo <= n * l ? to_string(lo) : "lucky") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}