#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<long long, long long> memo;

inline long long dp(long long n, long long p, long long q, long long x, long long y) {
  if (n <= 0) return 1;
  if (memo.find(n) != memo.end()) return memo[n];
  return memo[n] = dp(n / p - x, p, q, x, y) + dp(n / q - y, p, q, x, y);
}

void solve(void) {
  long long n, p, q, x, y; cin >> n >> p >> q >> x >> y;

  cout << dp(n, p, q, x, y);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}