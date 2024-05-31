#include <iostream>
using namespace std;

inline int safe_mod(int a, int b) {
  return (a % b + b) % b;
}

bool solve(int idx) {
  int p, e, i, d; cin >> p >> e >> i >> d;
  if (p == -1 && e == -1 && i == -1 && d == -1) return false;

  p = safe_mod(p - d, 23);
  e = safe_mod(e - d, 28);
  i = safe_mod(i - d, 33);

  int ans = 1;
  for (int j=1; j<=21252; j++) {
    if (j % 23 == p && j % 28 == e && j % 33 == i) {
      ans = j;
      break;
    }
  }
  cout << "Case " << idx << ": the next triple peak occurs in " << ans << " days.\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}