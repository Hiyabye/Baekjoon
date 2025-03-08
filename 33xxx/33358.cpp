#include <iostream>
using namespace std;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

inline bool leap(int y) {
  return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

void solve(void) {
  int y; cin >> y;
  if (leap(y)) days[2] = 29;

  int d = 0;
  for (int i=1970; i<y; i++) {
    d = (d + 365 + leap(i)) % 7;
  }
  d = (d + 3) % 7 + 1;

  int ans = 0;
  for (int i=1; i<=12; i++) for (int j=1; j<=days[i]; j++) {
    if (d == 1 || j == 1) ans++;
    d = d % 7 + 1;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}