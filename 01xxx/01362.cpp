#include <iostream>
using namespace std;

inline bool check(int o, int w) {
  return o < w * 2 && w < 2 * o;
}

bool solve(int idx) {
  int o, w; cin >> o >> w;
  if (o == 0 && w == 0) return false;

  bool ok = true;
  char c; int n; cin >> c >> n;
  while (!(c == '#' && n == 0)) {
    w += n * (c == 'F' ? 1 : -1);
    if (w <= 0) ok = false;
    cin >> c >> n;
  }
  cout << idx << " " << (ok ? (check(o, w) ? ":-)" : ":-(") : "RIP") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}