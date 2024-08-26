#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int a = 0, b = 0;

inline int calc1(const vector<vector<int>> &m, int x, int y) {
  if (x == 0 || y == 0) { a++; return 0; }
  return m[x-1][y-1] + max(calc1(m, x-1, y), calc1(m, x, y-1));
}

inline int calc2(int n, const vector<vector<int>> &m) {
  vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    dp[i][j] = m[i][j] + max(dp[i-1][j], dp[i][j-1]);
    b++;
  }
  return dp[n][n];
}

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> m(n+1, vector<int>(n+1, 0));
  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) cin >> m[i][j];

  calc1(m, n, n); calc2(n, m);
  cout << a << " " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}