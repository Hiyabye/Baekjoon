#include <iostream>
using namespace std;

inline long long calc(long long n, long long k) {
  return k * (2 * n - k - 1) / 2;
}

void solve(void) {
  long long n; cin >> n;

  long long lo = 1, hi = n;
  while (lo < hi) {
    long long mid = (lo + hi) / 2;
    if (calc(n, mid) * 2 >= calc(n, n)) hi = mid;
    else lo = mid + 1;
  }
  cout << lo;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}