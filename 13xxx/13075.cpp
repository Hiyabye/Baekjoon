#include <iostream>
#include <vector>
#define MOD 1000000000
using namespace std;
using Matrix = vector<vector<long long>>;

Matrix matmul(const Matrix &a, const Matrix &b) {
  Matrix c(2, vector<long long>(2, 0));
  for (int i=0; i<2; i++) for (int j=0; j<2; j++) for (int k=0; k<2; k++) {
    c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
  }
  return c;
}

Matrix matpow(Matrix base, long long exp) {
  Matrix ret(2, vector<long long>(2, 0));
  for (int i=0; i<2; i++) ret[i][i] = 1;
  while (exp) {
    if (exp & 1) ret = matmul(ret, base);
    base = matmul(base, base);
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long x; cin >> x;

  cout << matpow({{1, 1}, {1, 0}}, x)[0][1] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}