#include <iostream>
using namespace std;

bool win(int a, int b) {
  if (a != 0 && a != 2 && a != 5) return false;
  if (b != 0 && b != 2 && b != 5) return true;
  if (a == 0) return b == 2;
  if (a == 2) return b == 5;
  if (a == 5) return b == 0;
  return false;
}

void solve(void) {
  int a, b; cin >> a >> b;

  if (!win(a, b) && !win(b, a)) cout << '=';
  else if (win(a, b)) cout << '>';
  else cout << '<';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}