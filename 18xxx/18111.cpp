#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, m, b;
  cin >> n >> m >> b;
  vector<vector<int> > a(n, vector<int>(m));
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cin >> a[i][j];
    }
  }

  pair<int, int> ans = make_pair(1e9, 0);
  for (int i=0; i<=256; i++) {
    int build = 0, remove = 0;
    for (int j=0; j<n; j++) {
      for (int k=0; k<m; k++) {
        if (a[j][k] > i) remove += a[j][k] - i;
        else if (a[j][k] < i) build += i - a[j][k];
      }
    }

    if (remove + b < build) continue;
    int time = remove * 2 + build;
    if (ans.first >= time) ans = make_pair(time, i);
  }
  cout << ans.first << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}