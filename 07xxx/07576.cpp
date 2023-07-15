#include <bits/stdc++.h>

using namespace std;

void solve(void) {
  int m, n;
  cin >> m >> n;
  vector<vector<int> > a(n, vector<int>(m));
  queue<pair<int, int> > q;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cin >> a[i][j];
      if (a[i][j] == 1) {
        q.push(make_pair(i, j));
      }
    }
  }

  while (!q.empty()) {
    pair<int, int> cur = q.front();
    q.pop();

    int x = cur.first;
    int y = cur.second;
    if (x > 0 && a[x-1][y] == 0) {
      a[x-1][y] = a[x][y] + 1;
      q.push(make_pair(x-1, y));
    }
    if (x < n-1 && a[x+1][y] == 0) {
      a[x+1][y] = a[x][y] + 1;
      q.push(make_pair(x+1, y));
    }
    if (y > 0 && a[x][y-1] == 0) {
      a[x][y-1] = a[x][y] + 1;
      q.push(make_pair(x, y-1));
    }
    if (y < m-1 && a[x][y+1] == 0) {
      a[x][y+1] = a[x][y] + 1;
      q.push(make_pair(x, y+1));
    }
  }

  int max = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (a[i][j] == 0) {
        cout << "-1\n";
        return;
      }
      if (max < a[i][j]) {
        max = a[i][j];
      }
    }
  }
  cout << max-1 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}