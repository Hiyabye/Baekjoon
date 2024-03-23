#include <iostream>
using namespace std;

bool solve(void) {
  int l, w, a; cin >> l >> w >> a;
  if (l == 0 && w == 0 && a == 0) return false;

  cout << (l ? l : a / w) << " ";
  cout << (w ? w : a / l) << " ";
  cout << (a ? a : l * w) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}