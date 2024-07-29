#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

inline pair<int, int> search(int m, const vector<vector<char>> &v, char c) {
  for (int i=0; i<m; i++) for (int j=0; j<m; j++) {
    if (v[i][j] == c) return {i, j};
  }
  return {-1, -1};
}

inline double dist(const pair<int, int> &a, const pair<int, int> &b) {
  return hypot(a.first-b.first, a.second-b.second);
}

void solve(void) {
  int m; cin >> m;
  vector<vector<char>> v(m, vector<char>(m));
  for (int i=0; i<m; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  pair<int, int> a = search(m, v, 's');

  vector<pair<double, pair<int, int>>> b;
  for (int i=0; i<m; i++) for (int j=0; j<m; j++) {
    if (v[i][j] != 'p') continue;
    b.push_back({dist(a, {i, j}), {i, j}});
  }
  sort(b.begin(), b.end());

  cout << "(" << a.first << "," << a.second << "):";
  cout << "(" << b[0].second.first << "," << b[0].second.second << "):";
  cout << fixed << setprecision(2) << b[0].first << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}