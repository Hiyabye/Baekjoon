#include <iostream>
#include <vector>
#define MOD 1000
using namespace std;
using Matrix = vector<vector<int>>;

Matrix matmul(const Matrix &a, const Matrix &b) {
  Matrix c(a.size(), vector<int>(b[0].size(), 0));
  for (int i=0; i<a.size(); i++) for (int j=0; j<b[0].size(); j++) for (int k=0; k<b.size(); k++) {
    c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
  }
  return c;
}

Matrix matpow(Matrix base, long long exp) {
  Matrix ret(base.size(), vector<int>(base.size(), 0));
  for (int i=0; i<base.size(); i++) ret[i][i] = 1;
  while (exp) {
    if (exp & 1) ret = matmul(ret, base);
    base = matmul(base, base);
    exp >>= 1;
  }
  return ret;
}

Matrix unit(int n) {
  Matrix ret(n, vector<int>(n, 0));
  for (int i=0; i<n; i++) ret[i][i] = 1;
  return ret;
}

Matrix matadd(const Matrix &a, const Matrix &b) {
  Matrix c(a.size(), vector<int>(a[0].size(), 0));
  for (int i=0; i<a.size(); i++) for (int j=0; j<a[0].size(); j++) {
    c[i][j] = (a[i][j] + b[i][j]) % MOD;
  }
  return c;
}

Matrix calc(Matrix base, int n, long long b) {
  if (b == 1) return base;
  Matrix ret = matmul(calc(base, n, b>>1), matadd(matpow(base, b>>1), unit(n)));
  if (b & 1) ret = matadd(ret, matpow(base, b));
  return ret;
}

void solve(void) {
  int n; long long b; cin >> n >> b;
  Matrix base(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> base[i][j];

  Matrix ans = calc(base, n, b);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << ans[i][j] % MOD << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}