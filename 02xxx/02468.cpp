#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, start = 100, limit = 0;
vector<vector<int> > a;
vector<vector<bool> > b;

void dfs(int x, int y) {
  if (x < 0 || x >= n || y < 0 || y >= n) return;
  if (b[x][y]) return;
  b[x][y] = true;
  dfs(x-1, y);
  dfs(x+1, y);
  dfs(x, y-1);
  dfs(x, y+1);
}

void solve(void) {
  cin >> n;
  a.resize(n, vector<int>(n));
  b.resize(n, vector<bool>(n));
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cin >> a[i][j];
      start = min(start, a[i][j]);
      limit = max(limit, a[i][j]);
    }
  }

  int ans = 0;
  for (int i=start; i<=limit; i++) {
    int cnt = 0;
    fill(b.begin(), b.end(), vector<bool>(n, true));
    for (int j=0; j<n; j++) {
      for (int k=0; k<n; k++) {
        if (a[j][k] < i) continue;
        b[j][k] = false;
      }
    }
    for (int j=0; j<n; j++) {
      for (int k=0; k<n; k++) {
        if (b[j][k]) continue;
        dfs(j, k);
        cnt++;
      }
    }
    ans = max(ans, cnt);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}