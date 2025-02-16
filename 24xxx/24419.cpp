#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

inline int calc(int n, int k) {
  vector<vector<int>> c(n+1, vector<int>(k+1, 0));
  for (int i=0; i<=n; i++) c[i][0] = 1;
  for (int i=1; i<=n; i++) for (int j=1; j<=k; j++) {
    c[i][j] = (c[i-1][j-1] + c[i-1][j]) % MOD;
  }
  return c[n][k];
}

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  cout << calc(2*n, n) << " " << n * n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}