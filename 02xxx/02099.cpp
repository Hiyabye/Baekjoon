#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<bool>>;

Matrix matmul(const Matrix &a, const Matrix &b) {
  Matrix c(a.size(), vector<bool>(b[0].size(), false));
  for (int i=0; i<a.size(); i++) for (int j=0; j<b[0].size(); j++) for (int k=0; k<a[0].size(); k++) {
    c[i][j] = c[i][j] | (a[i][k] & b[k][j]);
  }
  return c;
}

Matrix matpow(Matrix base, int exp) {
  Matrix ret(base.size(), vector<bool>(base.size(), false));
  for (int i=0; i<base.size(); i++) ret[i][i] = true;
  while (exp) {
    if (exp & 1) ret = matmul(ret, base);
    base = matmul(base, base);
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  int n, k, m; cin >> n >> k >> m;

  vector<vector<bool>> adj(n, vector<bool>(n, false));
  for (int i=0; i<n; i++) {
    int x, y; cin >> x >> y; x--; y--;
    adj[i][x] = adj[i][y] = true;
  }

  adj = matpow(adj, k);
  while (m--) {
    int a, b; cin >> a >> b; a--; b--;
    cout << (adj[a][b] ? "death" : "life") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}