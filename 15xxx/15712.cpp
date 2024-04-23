#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<long long>>;

Matrix matmul(const Matrix &a, const Matrix &b, int mod) {
  Matrix c(2, vector<long long>(2, 0));
  for (int i=0; i<2; i++) for (int j=0; j<2; j++) for (int k=0; k<2; k++) {
    c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % mod;
  }
  return c;
}

Matrix matpow(Matrix base, int exp, int mod) {
  Matrix ret(2, vector<long long>(2, 0));
  for (int i=0; i<2; i++) ret[i][i] = 1;
  while (exp) {
    if (exp & 1) ret = matmul(ret, base, mod);
    base = matmul(base, base, mod);
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  int a, r, n, mod; cin >> a >> r >> n >> mod;

  cout << matpow({{r, a}, {0, 1}}, n, mod)[0][1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}