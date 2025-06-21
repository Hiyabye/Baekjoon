#include <cmath>
#include <iostream>
using namespace std;

inline long long flip(long long n) {
  long long ret = 0;
  while (n) {
    ret = ret * 10 + n % 10;
    n /= 10;
  }
  return ret;
}

inline bool check(long long n) {
  return (long long)sqrt(n) * (long long)sqrt(n) == n;
}

bool solve(void) {
  long long n; cin >> n;

  return check(n) && check(flip(n));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}