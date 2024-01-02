#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve(void) {
  int n, m, x, y;
  cin >> n >> m;
  vector<vector<int> > a(n, vector<int>(m));
  vector<vector<int> > dist(n, vector<int>(m));
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cin >> a[i][j];
      if (a[i][j] == 2) x = i, y = j;
      else if (a[i][j] == 0) dist[i][j] = 0;
      else dist[i][j] = -1;
    }
  }

  queue<pair<int, int> > q;
  q.push(make_pair(x, y));
  dist[x][y] = 0;
  while (!q.empty()) {
    x = q.front().first;
    y = q.front().second;
    q.pop();

    if (x > 0 && dist[x-1][y] == -1) {
      dist[x-1][y] = dist[x][y] + 1;
      q.push(make_pair(x-1, y));
    }
    if (x < n-1 && dist[x+1][y] == -1) {
      dist[x+1][y] = dist[x][y] + 1;
      q.push(make_pair(x+1, y));
    }
    if (y > 0 && dist[x][y-1] == -1) {
      dist[x][y-1] = dist[x][y] + 1;
      q.push(make_pair(x, y-1));
    }
    if (y < m-1 && dist[x][y+1] == -1) {
      dist[x][y+1] = dist[x][y] + 1;
      q.push(make_pair(x, y+1));
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cout << dist[i][j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}