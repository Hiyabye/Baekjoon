#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<__int128>>;

Matrix matmul(const Matrix &a, const Matrix &b, long long mod) {
  Matrix c(2, vector<__int128>(2, 0));
  for (int i=0; i<2; i++) for (int j=0; j<2; j++) for (int k=0; k<2; k++) {
    c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % mod;
  }
  return c;
}

Matrix matpow(Matrix base, long long exp, long long mod) {
  Matrix ret(2, vector<__int128>(2, 0));
  for (int i=0; i<2; i++) ret[i][i] = 1;
  while (exp) {
    if (exp & 1) ret = matmul(ret, base, mod);
    base = matmul(base, base, mod);
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long m, a, c, x0, n, g;
  cin >> m >> a >> c >> x0 >> n >> g;

  Matrix mat = matpow({{a, c}, {0, 1}}, n, m);
  long long ans = (mat[0][0] * x0 + mat[0][1]) % m;
  cout << ans % g;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}