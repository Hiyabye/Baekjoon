#include <iostream>
#include <vector>
using namespace std;

bool leap(int y) {
  return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

bool solve(void) {
  int d, m, y; cin >> d >> m >> y;
  if (d == 0 && m == 0 && y == 0) return false;
  
  const vector<int> v = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

  cout << d + v[m-1] + (leap(y) && m > 2) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}