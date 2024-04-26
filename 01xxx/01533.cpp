#include <iostream>
#include <vector>
#define MOD 1000003
using namespace std;
using Matrix = vector<vector<long long>>;

Matrix matmul(const Matrix &a, const Matrix &b) {
  Matrix c(a.size(), vector<long long>(b[0].size(), 0));
  for (int i=0; i<a.size(); i++) for (int j=0; j<b[0].size(); j++) for (int k=0; k<a[0].size(); k++) {
    c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
  }
  return c;
}

Matrix matpow(Matrix base, int exp) {
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
  int n, s, e, t; cin >> n >> s >> e >> t; s--; e--;

  Matrix base(n*5, vector<long long>(n*5, 0));
  for (int i=0; i<n; i++) for (int j=1; j<5; j++) {
    base[i*5+j][i*5+j-1] = 1;
  }

  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    char c; cin >> c;
    if (c != '0') base[i*5][j*5+c-'1'] = 1;
  }
  cout << matpow(base, t)[s*5][e*5];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}