#include <iostream>
using namespace std;

bool solve(void) {
  double x, y; cin >> x >> y;
  if (x == 0 && y == 0) {
    cout << "AXIS\n";
    return false;
  }

  if (x == 0 || y == 0)    cout << "AXIS";
  else if (x > 0 && y > 0) cout << "Q1";
  else if (x < 0 && y > 0) cout << "Q2";
  else if (x < 0 && y < 0) cout << "Q3";
  else                     cout << "Q4";
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}