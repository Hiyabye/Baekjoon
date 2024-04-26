#include <iostream>
#include <vector>
#define MOD 998244353
using namespace std;
using Matrix = vector<vector<long long>>;

Matrix matmul(const Matrix &a, const Matrix &b) {
  Matrix c(a.size(), vector<long long>(b[0].size(), 0));
  for (int i=0; i<a.size(); i++) for (int j=0; j<b[0].size(); j++) for (int k=0; k<a[0].size(); k++) {
    c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
  }
  return c;
}

Matrix matpow(Matrix base, long long exp) {
  Matrix ret(5, vector<long long>(5, 0));
  for (int i=0; i<5; i++) ret[i][i] = 1;
  while (exp) {
    if (exp & 1) ret = matmul(ret, base);
    base = matmul(base, base);
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long n; cin >> n;

  if (n <= 5) {
    cout << (n <= 3 ? 1 : 2) << "\n";
    return;
  }

  Matrix base(5, vector<long long>(5, 0));
  base[0][0] = base[0][4] = 1;
  for (int i=1; i<5; i++) base[i][i-1] = 1;

  cout << matmul(matpow(base, n-5), {{2}, {2}, {1}, {1}, {1}})[0][0] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}