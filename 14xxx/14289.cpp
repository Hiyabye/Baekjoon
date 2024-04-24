#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;
using Matrix = vector<vector<long long>>;

Matrix matmul(int n, const Matrix &a, const Matrix &b) {
  Matrix c(n, vector<long long>(n, 0));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) for (int k=0; k<n; k++) {
    c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
  }
  return c;
}

Matrix matpow(int n, Matrix base, int exp) {
  Matrix ret(n, vector<long long>(n, 0));
  for (int i=0; i<n; i++) ret[i][i] = 1;
  while (exp) {
    if (exp & 1) ret = matmul(n, ret, base);
    base = matmul(n, base, base);
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<long long>> adj(n, vector<long long>(n, 0));
  while (m--) {
    int a, b; cin >> a >> b; a--, b--;
    adj[a][b] = adj[b][a] = 1;
  }
  int d; cin >> d;

  cout << matpow(n, adj, d)[0][0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}