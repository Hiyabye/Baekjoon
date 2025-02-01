#include <algorithm>
#include <iostream>
using namespace std;

inline int two(int n) {
  int ret = 0;
  while (n /= 2) ret += n;
  return ret;
}

inline int five(int n) {
  int ret = 0;
  while (n /= 5) ret += n;
  return ret;
}

inline int calc(int n) {
  return min(two(n), five(n));
}

void solve(void) {
  int m; cin >> m;

  int lo = 0, hi = 1e9;
  while (lo < hi) {
    int mid = (lo + hi) / 2;
    if (calc(mid) < m) lo = mid + 1;
    else hi = mid;
  }
  cout << (calc(lo) == m ? lo : -1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}