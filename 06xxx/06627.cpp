#include <iostream>
using namespace std;

inline int calc(int x) {
  int ret = 0;
  while (x) {
    ret += x % 10;
    x /= 10;
  }
  return ret;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  int ans = 11;
  while (calc(n) != calc(n * ans)) ans++;
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}