#include <bits/stdc++.h>
using namespace std;

int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

void solve(void) {
  int l;
  pair<int, int> start, end;
  cin >> l;
  cin >> start.first >> start.second;
  cin >> end.first >> end.second;

  vector<vector<int> > ans(l, vector<int>(l, -1));
  ans[start.first][start.second] = 0;
  queue<pair<int, int> > q;
  q.push(start);
  while (!q.empty()) {
    int x = q.front().first, y = q.front().second;
    q.pop();

    if (x == end.first && y == end.second) break;
    for (int i=0; i<8; i++) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx < 0 || nx >= l || ny < 0 || ny >= l || ans[nx][ny] != -1) continue;
      ans[nx][ny] = ans[x][y] + 1;
      q.push(make_pair(nx, ny));
    }
  }

  cout << ans[end.first][end.second] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}