#include <iostream>
using namespace std;

bool solve(void) {
  int a, b; cin >> a >> b;
  if (a == -1 && b == -1) return false;

  cout << a << "+" << b << (a == 1 || b == 1 ? "=" : "!=") << a + b << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}