#include <iostream>
using namespace std;

inline bool check(int h, int m) {
  int a = h / 10, b = h % 10, c = m / 10, d = m % 10;

  return (b == 2 && c == 3 && d == 9) ||
         (a == 2 && (b == 0 || b == 2 || b == 3) && c == 3 && d == 9) ||
         (a == 2 && b == 3 && (c == 0 || c == 3 || c == 9) && d == 9) ||
         (a == 2 && b == 3 && c == 9);
}

void solve(void) {
  int h, m; cin >> h >> m;

  int ans = 0;
  for (int i=0; i<h; i++) for (int j=0; j<m; j++) {
    if (check(i, j)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}