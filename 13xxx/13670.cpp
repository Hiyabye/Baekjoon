#include <iostream>
using namespace std;

bool solve(void) {
  int h1, m1, h2, m2; cin >> h1 >> m1 >> h2 >> m2;
  if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) return false;

  cout << ((h2 - h1) * 60 + (m2 - m1) + 1440) % 1440 << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}