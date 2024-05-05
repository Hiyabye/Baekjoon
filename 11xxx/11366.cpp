#include <iostream>
using namespace std;

bool solve(void) {
  int a, b, c; cin >> a >> b >> c;
  if (a == 0 && b == 0 && c == 0) return false;

  if (a == 0 && b == 0) {
    cout << "0\n";
    return true;
  }

  while (c--) {
    int tmp = a + b;
    a = b;
    b = tmp;
  }
  cout << b << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}