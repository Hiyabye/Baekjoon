#include <iostream>
using namespace std;

bool solve(void) {
  int a, b, c; cin >> a >> b >> c;
  if (a == 0 && b == 0 && c == 0) return false;

  if (!((c - a) % b) && (c - a) / b >= 0) cout << (c - a) / b + 1;
  else cout << "X";
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}