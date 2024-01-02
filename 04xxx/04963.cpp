#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

void bfs(vector<vector<bool> > &a, pair<int, int> c) {
  queue<pair<int, int> > q;
  q.push(c);
  a[c.first][c.second] = 0;

  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for (int i=-1; i<=1; i++) {
      for (int j=-1; j<=1; j++) {
        if (i == 0 && j == 0) continue;
        if (x+i < 0 || x+i >= a.size()) continue;
        if (y+j < 0 || y+j >= a[0].size()) continue;
        if (!a[x+i][y+j]) continue;
        q.push(make_pair(x+i, y+j));
        a[x+i][y+j] = false;
      }
    }
  }
}

bool solve(void) {
  int w, h;
  cin >> w >> h;
  if (w == 0 && h == 0) return false;
  vector<vector<bool> > a(h, vector<bool>(w));
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      int tmp;
      cin >> tmp;
      a[i][j] = tmp ? true : false;
    }
  }

  int cnt = 0;
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      if (!a[i][j]) continue;
      bfs(a, make_pair(i, j));
      cnt++;
    }
  }
  cout << cnt << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve()) {
  }
  return 0;
}