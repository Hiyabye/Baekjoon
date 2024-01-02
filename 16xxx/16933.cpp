#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

typedef struct State {
  int x, y, z, t;

  State(int _x, int _y, int _z, int _t) {
    x = _x; y = _y; z = _z; t = _t;
  }
} State;

void solve(void) {
  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<int> > a(n, vector<int>(m));
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    for (int j=0; j<m; j++) {
      a[i][j] = s[j] - '0';
    }
  }

  vector<vector<vector<int> > > dp(n, vector<vector<int> >(m, vector<int>(k+1, -1)));
  dp[0][0][0] = 1;
  queue<State> q;
  q.push(State(0, 0, 0, 1));

  while (!q.empty()) {
    int x = q.front().x, y = q.front().y, z = q.front().z, t = q.front().t;
    q.pop();

    for (int i=0; i<4; i++) {
      int nx = x+dx[i], ny = y+dy[i];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

      if (a[nx][ny] == 0 && dp[nx][ny][z] == -1) {
        dp[nx][ny][z] = t+1;
        q.push(State(nx, ny, z, t+1));
      } else if (a[nx][ny] == 1 && z < k && dp[nx][ny][z+1] == -1) {
        if (t & 1) {
          dp[nx][ny][z+1] = t+1;
          q.push(State(nx, ny, z+1, t+1));
        } else {
          q.push(State(x, y, z, t+1));
        }
      }
    }
  }

  int ans = 1e9;
  for (int i=0; i<=k; i++) {
    if (dp[n-1][m-1][i] != -1) ans = min(ans, dp[n-1][m-1][i]);
  }
  if (ans == 1e9) ans = -1;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}