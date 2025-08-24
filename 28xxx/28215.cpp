#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<int> x, y, q;
vector<vector<int>> d;

inline int calc(void) {
  int ret = 0;
  for (int i=0; i<n; i++) {
    int mn = 1e9;
    for (int j=0; j<k; j++) mn = min(mn, d[i][q[j]]);
    ret = max(ret, mn);
  }
  return ret;
}

void solve(void) {
  cin >> n >> k;
  x.resize(n); y.resize(n); q.resize(k);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  d.resize(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    d[i][j] = abs(x[i] - x[j]) + abs(y[i] - y[j]);
  }

  int ans = 1e9;
  if (k == 1) {
    for (int i=0; i<n; i++) {
      q[0] = i;
      ans = min(ans, calc());
    }
  } else if (k == 2) {
    for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
      q[0] = i; q[1] = j;
      ans = min(ans, calc());
    }
  } else if (k == 3) {
    for (int i=0; i<n-2; i++) for (int j=i+1; j<n-1; j++) for (int l=j+1; l<n; l++) {
      q[0] = i; q[1] = j; q[2] = l;
      ans = min(ans, calc());
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}