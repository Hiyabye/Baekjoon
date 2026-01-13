#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

const int MAX_N = 16;
const double INF = 1e9;

int n;
double w[MAX_N][MAX_N];
double dp[MAX_N][1 << MAX_N];

inline double tsp(int cur, int mask) {
  if (mask == (1 << n) - 1) return w[cur][0];

  double &ret = dp[cur][mask];
  if (ret >= 0) return ret;
  ret = INF;

  for (int nxt=0; nxt<n; nxt++) {
    if (mask & (1 << nxt)) continue;
    ret = min(ret, tsp(nxt, mask | (1 << nxt)) + w[cur][nxt]);
  }
  return ret;
}

void solve(void) {
  cin >> n;
  vector<double> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    w[i][j] = hypot(x[i]-x[j], y[i]-y[j]);
  }
  for (int i=0; i<n; i++) for (int j=0; j<(1<<n); j++) {
    dp[i][j] = -1.0;
  }
  cout << fixed << setprecision(7) << tsp(0, 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}