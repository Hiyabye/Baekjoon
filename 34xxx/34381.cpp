#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};

void solve(void) {
  char x; int y; cin >> x >> y;

  vector<pair<char, int>> ans;
  for (int i=0; i<8; i++) {
    char nx = x + dx[i]; int ny = y + dy[i];
    if (nx < 'a' || nx > 'h' || ny < 1 || ny > 8) continue;
    ans.push_back({nx, ny});
  }
  sort(ans.begin(), ans.end());

  for (auto &[a, b] : ans) cout << a << b << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}