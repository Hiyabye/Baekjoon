#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<int> > a(n, vector<int>(m));
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    for (int j=0; j<m; j++) {
      a[i][j] = s[j] - '0';
    }
  }

  vector<vector<vector<int> > > dp(n, vector<vector<int> >(m, vector<int>(k+1, 1e9)));
  dp[0][0][0] = 1;
  queue<pair<pair<int, int>, int> > q;
  q.push(make_pair(make_pair(0, 0), 0));

  while (!q.empty()) {
    int x = q.front().first.first, y = q.front().first.second, z = q.front().second;
    q.pop();

    if (x > 0) {
      if (a[x-1][y] == 0 && dp[x-1][y][z] > dp[x][y][z] + 1) {
        dp[x-1][y][z] = dp[x][y][z] + 1;
        q.push(make_pair(make_pair(x-1, y), z));
      }
      if (a[x-1][y] == 1 && z < k && dp[x-1][y][z+1] > dp[x][y][z] + 1) {
        dp[x-1][y][z+1] = dp[x][y][z] + 1;
        q.push(make_pair(make_pair(x-1, y), z+1));
      }
    }
    if (x < n-1) {
      if (a[x+1][y] == 0 && dp[x+1][y][z] > dp[x][y][z] + 1) {
        dp[x+1][y][z] = dp[x][y][z] + 1;
        q.push(make_pair(make_pair(x+1, y), z));
      }
      if (a[x+1][y] == 1 && z < k && dp[x+1][y][z+1] > dp[x][y][z] + 1) {
        dp[x+1][y][z+1] = dp[x][y][z] + 1;
        q.push(make_pair(make_pair(x+1, y), z+1));
      }
    }
    if (y > 0) {
      if (a[x][y-1] == 0 && dp[x][y-1][z] > dp[x][y][z] + 1) {
        dp[x][y-1][z] = dp[x][y][z] + 1;
        q.push(make_pair(make_pair(x, y-1), z));
      }
      if (a[x][y-1] == 1 && z < k && dp[x][y-1][z+1] > dp[x][y][z] + 1) {
        dp[x][y-1][z+1] = dp[x][y][z] + 1;
        q.push(make_pair(make_pair(x, y-1), z+1));
      }
    }
    if (y < m-1) {
      if (a[x][y+1] == 0 && dp[x][y+1][z] > dp[x][y][z] + 1) {
        dp[x][y+1][z] = dp[x][y][z] + 1;
        q.push(make_pair(make_pair(x, y+1), z));
      }
      if (a[x][y+1] == 1 && z < k && dp[x][y+1][z+1] > dp[x][y][z] + 1) {
        dp[x][y+1][z+1] = dp[x][y][z] + 1;
        q.push(make_pair(make_pair(x, y+1), z+1));
      }
    }
  }

  int ans = 1e9;
  for (int i=0; i<=k; i++) {
    ans = min(ans, dp[n-1][m-1][i]);
  }
  cout << (ans == 1e9 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}