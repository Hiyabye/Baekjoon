#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

void process(vector<vector<char> > &a, int n, pair<int, int> c) {
  queue<pair<int, int> > q;
  q.push(c);
  char color = a[c.first][c.second];
  a[c.first][c.second] = 'X';

  while (!q.empty()) {
    pair<int, int> cur = q.front();
    q.pop();

    int x = cur.first;
    int y = cur.second;

    if (x > 0 && a[x-1][y] == color) {
      a[x-1][y] = 'X';
      q.push(make_pair(x-1, y));
    }
    if (x < n-1 && a[x+1][y] == color) {
      a[x+1][y] = 'X';
      q.push(make_pair(x+1, y));
    }
    if (y > 0 && a[x][y-1] == color) {
      a[x][y-1] = 'X';
      q.push(make_pair(x, y-1));
    }
    if (y < n-1 && a[x][y+1] == color) {
      a[x][y+1] = 'X';
      q.push(make_pair(x, y+1));
    }
  }
}

void solve(void) {
  int n, ans = 0;
  cin >> n;
  vector<vector<char> > a(n, vector<char>(n)), b(n, vector<char>(n));
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cin >> a[i][j];
      b[i][j] = a[i][j] == 'R' ? 'G' : a[i][j];
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (a[i][j] == 'R' || a[i][j] == 'G' || a[i][j] == 'B') {
        ans++;
        process(a, n, make_pair(i, j));
      }
    }
  }
  cout << ans << " ";

  ans = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (b[i][j] == 'G' || b[i][j] == 'B') {
        ans++;
        process(b, n, make_pair(i, j));
      }
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