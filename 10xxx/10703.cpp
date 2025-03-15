#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int r, s; cin >> r >> s;
  vector<vector<char>> v(r, vector<char>(s));
  for (int i=0; i<r; i++) for (int j=0; j<s; j++) cin >> v[i][j];

  vector<int> m(s, -1), g(s, -1);
  vector<pair<int, int>> p;
  for (int i=0; i<r; i++) for (int j=0; j<s; j++) {
    if (v[i][j] == 'X') m[j] = i, p.push_back({i, j});
  }
  for (int i=r-1; i>=0; i--) for (int j=0; j<s; j++) {
    if (v[i][j] == '#') g[j] = i;
  }

  int move = 1e9;
  for (int i=0; i<s; i++) {
    if (m[i] == -1) continue;
    move = min(move, g[i] - m[i] - 1);
  }

  for (auto [i, j] : p) v[i][j] = '.';
  for (auto [i, j] : p) v[i+move][j] = 'X';
  for (int i=0; i<r; i++) {
    for (int j=0; j<s; j++) cout << v[i][j];
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}