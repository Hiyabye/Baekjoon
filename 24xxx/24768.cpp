#include <iostream>
using namespace std;

bool solve(void) {
  int x, y; cin >> x >> y;
  if (x == 0 && y == 0) return false;

  if (x + y == 13) cout << "Never speak again.";
  else if (x < y) cout << "Left beehind.";
  else if (x == y) cout << "Undecided.";
  else cout << "To the convention.";
  cout << "\n";
  
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}