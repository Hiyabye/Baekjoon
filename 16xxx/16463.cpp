#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> mp = {
  {1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30},
  {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}
};

inline bool leap(int y, int m) {
  return m == 2 && y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

void solve(void) {
  int n; cin >> n;

  int ans = 0, y = 2019, m = 1, d = 1, w = 2;
  while (y <= n) {
    if (d == 13 && w == 5) ans++;
    w = (w + 1) % 7;
    if (++d > mp[m] + leap(y, m)) d = 1, m++;
    if (m > 12) m = 1, y++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}