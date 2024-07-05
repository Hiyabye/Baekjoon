#include <iomanip>
#include <iostream>
using namespace std;

inline long long calc(long long l, long long w, long long h, long double a) {
  return (long long)(l / a) * (long long)(w / a) * (long long)(h / a);
}

void solve(void) {
  long long n, l, w, h; cin >> n >> l >> w >> h;

  long double lo = 0, hi = 1e9;
  while (hi - lo > 1e-10) {
    long double mid = (lo + hi) / 2;
    if (calc(l, w, h, mid) >= n) lo = mid;
    else hi = mid;
  }
  cout << fixed << setprecision(10) << lo;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}