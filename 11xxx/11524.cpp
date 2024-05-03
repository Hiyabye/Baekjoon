#include <iostream>
#include <vector>
#define MOD 1000000000
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
  Matrix ret(base.size(), vector<long long>(base.size(), 0));
  for (int i=0; i<base.size(); i++) ret[i][i] = 1;
  while (exp) {
    if (exp & 1) ret = matmul(ret, base);
    base = matmul(base, base);
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long k, y; cin >> k >> y;

  cout << k << " " << matpow({{1, 1}, {1, 0}}, y)[0][1] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int p; cin >> p;
  while (p--) solve();
  return 0;
}