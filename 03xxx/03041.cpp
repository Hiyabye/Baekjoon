#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

pair<int, int> find(const vector<vector<char>> &v, char c) {
  for (int i=0; i<4; i++) for (int j=0; j<4; j++) if (v[i][j] == c) return {i, j};
  return {-1, -1};
}

void solve(void) {
  vector<vector<char>> v(4, vector<char>(4));
  for (int i=0; i<4; i++) for (int j=0; j<4; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<15; i++) {
    auto [x, y] = find(v, 'A'+i);
    ans += abs(x - i/4) + abs(y - i%4);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}