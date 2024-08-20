#include <iostream>
using namespace std;

inline bool check(long long n) {
  int ret = 0;
  while (n) {
    ret += n % 10;
    n /= 10;
  }
  return ret & 1;
}

void solve(void) {
  long long n; cin >> n;

  for (long long i=9; i<=999999999; i=i*10+9) {
    if (check(n * i)) {
      cout << n * i << "\n";
      return;
    }
  }
  cout << -1 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}