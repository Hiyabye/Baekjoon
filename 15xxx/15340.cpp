#include <algorithm>
#include <iostream>
using namespace std;

bool solve(void) {
  int c, d; cin >> c >> d;
  if (c == 0 && d == 0) return false;

  cout << min({30*c+40*d, 35*c+30*d, 40*c+20*d}) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}