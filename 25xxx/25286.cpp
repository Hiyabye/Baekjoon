#include <iostream>
using namespace std;

bool leap(int y) {
  if (y % 100 != 0 && y % 4 == 0) return true;
  if (y % 400 == 0) return true;
  return false;
}

int year(int y, int m) {
  return y - (m == 1);
}

int month(int m) {
  return (m + 10) % 12 + 1;
}

int day(int y, int m) {
  switch (m) {
    case 1: case 2: case 4: case 6: case 8: case 9: case 11: return 31;
    case 5: case 7: case 10: case 12: return 30;
    case 3: return 28 + leap(y);
  }
  return -1;
}

void solve(void) {
  int y, m; cin >> y >> m;

  cout << year(y, m) << " " << month(m) << " " << day(y, m) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}