#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  for (int i=0; i<n; i++) {
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

    int cnt = 0, idx;
    if (a <= 127) { cnt++; idx = 0; }
    if (b <= 127) { cnt++; idx = 1; }
    if (c <= 127) { cnt++; idx = 2; }
    if (d <= 127) { cnt++; idx = 3; }
    if (e <= 127) { cnt++; idx = 4; }
    cout << (cnt == 1 ? (char)('A' + idx) : '*') << "\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}