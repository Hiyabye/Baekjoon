#include <iostream>
#include <vector>
#define MOD 100000007
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

int solve(void) {
  int k, n; cin >> k >> n;
  if (k >= n) return 1;

  Matrix a(k+1, vector<long long>(k+1, 0));
  a[0][0]++; a[0][k]++;
  for (int i=1; i<=k; i++) a[i][i-1]++;

  Matrix b(k+1, vector<long long>(1, 1));
  return matmul(matpow(a, n-k), b)[0][0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}