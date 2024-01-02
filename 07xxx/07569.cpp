#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

void solve(void) {
  int m, n, h;
  cin >> m >> n >> h;
  vector<vector<vector<int> > > a(h, vector<vector<int> >(n, vector<int>(m)));
  queue<pair<int, pair<int, int> > > q;
  for (int i=0; i<h; i++) {
    for (int j=0; j<n; j++) {
      for (int k=0; k<m; k++) {
        cin >> a[i][j][k];
        if (a[i][j][k] == 1) {
          q.push(make_pair(i, make_pair(j, k)));
        }
      }
    }
  }

  while (!q.empty()) {
    pair<int, pair<int, int> > cur = q.front();
    q.pop();

    int x = cur.first;
    int y = cur.second.first;
    int z = cur.second.second;

    if (x > 0 && a[x-1][y][z] == 0) {
      a[x-1][y][z] = a[x][y][z] + 1;
      q.push(make_pair(x-1, make_pair(y, z)));
    }
    if (x < h-1 && a[x+1][y][z] == 0) {
      a[x+1][y][z] = a[x][y][z] + 1;
      q.push(make_pair(x+1, make_pair(y, z)));
    }
    if (y > 0 && a[x][y-1][z] == 0) {
      a[x][y-1][z] = a[x][y][z] + 1;
      q.push(make_pair(x, make_pair(y-1, z)));
    }
    if (y < n-1 && a[x][y+1][z] == 0) {
      a[x][y+1][z] = a[x][y][z] + 1;
      q.push(make_pair(x, make_pair(y+1, z)));
    }
    if (z > 0 && a[x][y][z-1] == 0) {
      a[x][y][z-1] = a[x][y][z] + 1;
      q.push(make_pair(x, make_pair(y, z-1)));
    }
    if (z < m-1 && a[x][y][z+1] == 0) {
      a[x][y][z+1] = a[x][y][z] + 1;
      q.push(make_pair(x, make_pair(y, z+1)));
    }
  }

  int max = 0;
  for (int i=0; i<h; i++) {
    for (int j=0; j<n; j++) {
      for (int k=0; k<m; k++) {
        if (a[i][j][k] == 0) {
          cout << "-1\n";
          return;
        }
        if (max < a[i][j][k]) {
          max = a[i][j][k];
        }
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