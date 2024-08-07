#include <iostream>
using namespace std;

inline int calc(int a, int b) {
  return (a - b + 40) % 40 * 9;
}

bool solve(void) {
  int a, b, c, d; cin >> a >> b >> c >> d;
  if (a == 0 && b == 0 && c == 0 && d == 0) return false;

  cout << 1080 + calc(a, b) + calc(c, b) + calc(c, d) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}