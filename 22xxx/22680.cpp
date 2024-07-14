#include <algorithm>
#include <iostream>
using namespace std;

bool solve(void) {
  int e; cin >> e;
  if (e == 0) return false;

  int m = 1e9;
  for (int z=0; z*z*z<=e; z++) {
    for (int y=0; y*y+z*z*z<=e; y++) {
      int x = e - y*y - z*z*z;
      m = min(m, x+y+z);
    }
  }
  cout << m << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}