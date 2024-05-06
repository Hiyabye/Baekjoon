#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  pair<int, int> a = {-1, -1}, b = {-1, -1};
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (v[i][j] == 1) {
        if (a.first == -1) a = {i, j};
        else b = {i, j};
      }
    }
  }
  cout << abs(a.first - b.first) + abs(a.second - b.second);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}