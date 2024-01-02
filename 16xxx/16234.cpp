#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
using namespace std;

int n, l, r;

pair<int, int> unite(vector<vector<pair<int, int> > > &a, int id, int x, int y) {
  pair<int, int> ret = make_pair(a[x][y].first, 1);
  a[x][y].second = id;

  if (x > 0 && a[x-1][y].second == -1 && l <= abs(a[x][y].first - a[x-1][y].first) && abs(a[x][y].first - a[x-1][y].first) <= r) {
    pair<int, int> tmp = unite(a, id, x-1, y);
    ret.first += tmp.first;
    ret.second += tmp.second;
  }
  if (x < n-1 && a[x+1][y].second == -1 && l <= abs(a[x][y].first - a[x+1][y].first) && abs(a[x][y].first - a[x+1][y].first) <= r) {
    pair<int, int> tmp = unite(a, id, x+1, y);
    ret.first += tmp.first;
    ret.second += tmp.second;
  }
  if (y > 0 && a[x][y-1].second == -1 && l <= abs(a[x][y].first - a[x][y-1].first) && abs(a[x][y].first - a[x][y-1].first) <= r) {
    pair<int, int> tmp = unite(a, id, x, y-1);
    ret.first += tmp.first;
    ret.second += tmp.second;
  }
  if (y < n-1 && a[x][y+1].second == -1 && l <= abs(a[x][y].first - a[x][y+1].first) && abs(a[x][y].first - a[x][y+1].first) <= r) {
    pair<int, int> tmp = unite(a, id, x, y+1);
    ret.first += tmp.first;
    ret.second += tmp.second;
  }
  return ret;
}

bool process(vector<vector<pair<int, int> > > &a) {
  int id = 0;
  bool changed = false;
  vector<pair<int, int> > uni;

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (a[i][j].second == -1) {
        uni.push_back(unite(a, id++, i, j));
        if (uni.back().second > 1) changed = true;
      }
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (a[i][j].second != -1) {
        a[i][j].first = uni[a[i][j].second].first / uni[a[i][j].second].second;
        a[i][j].second = -1;
      }
    }
  }
  return changed;
}

void solve(void) {
  cin >> n >> l >> r;
  vector<vector<pair<int, int> > > a(n, vector<pair<int, int> >(n));
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cin >> a[i][j].first;
      a[i][j].second = -1;
    }
  }

  int ans = 0;
  while (process(a)) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}