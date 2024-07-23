#include <iostream>
using namespace std;

bool solve(void) {
  int n, m, c; cin >> n >> m >> c;
  if (n == 0 && m == 0 && c == 0) return false;

  cout << ((n - 7) * (m - 7) + c) / 2 << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}