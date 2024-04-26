#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;
using Matrix = vector<vector<long long>>;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

Matrix matmul(const Matrix &a, const Matrix &b) {
  Matrix c(2, vector<long long>(2, 0));
  for (int i=0; i<2; i++) for (int j=0; j<2; j++) for (int k=0; k<2; k++) {
    c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
  }
  return c;
}

Matrix matpow(Matrix base, int exp) {
  Matrix ret = {{1, 0}, {0, 1}};
  while (exp) {
    if (exp & 1) ret = matmul(ret, base);
    base = matmul(base, base);
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;

  cout << matpow({{1, 1}, {1, 0}}, gcd(n, m))[0][1] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}