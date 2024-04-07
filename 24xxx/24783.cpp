#include <iostream>
using namespace std;

bool solve(void) {
  int a, b, c; cin >> a >> b >> c;

  if (a + b == c) return true;
  if (a + c == b) return true;
  if (b + c == a) return true;
  if (a * b == c) return true;
  if (a * c == b) return true;
  if (b * c == a) return true;
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << (solve() ? "Possible" : "Impossible") << "\n";
  return 0;
}