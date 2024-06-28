#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int n;
vector<vector<int> > a;

pair<int, int> count(int size, int x, int y) {
  pair<int, int> ret = make_pair(0, 0);

  int first = a[x][y];
  for (int i=x; i<x+size; i++) {
    for (int j=y; j<y+size; j++) {
      if (a[i][j] == first) continue;
      pair<int, int> tmp = count(size/2, x, y);
      ret.first += tmp.first;
      ret.second += tmp.second;
      tmp = count(size/2, x+size/2, y);
      ret.first += tmp.first;
      ret.second += tmp.second;
      tmp = count(size/2, x, y+size/2);
      ret.first += tmp.first;
      ret.second += tmp.second;
      tmp = count(size/2, x+size/2, y+size/2);
      ret.first += tmp.first;
      ret.second += tmp.second;
      return ret;
    }
  }

  if (first) ret.second++;
  else ret.first++;
  return ret;
}

void solve(void) {
  cin >> n;
  a.resize(n, vector<int>(n));
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cin >> a[i][j];
    }
  }

  pair<int, int> ans = count(n, 0, 0);
  cout << ans.first << "\n" << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}