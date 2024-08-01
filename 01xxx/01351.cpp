#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<long long, long long> memo;

inline long long dp(long long n, long long p, long long q) {
  if (n == 0) return 1;
  if (memo.find(n) != memo.end()) return memo[n];
  return memo[n] = dp(n/p, p, q) + dp(n/q, p, q);
}

void solve(void) {
  long long n, p, q; cin >> n >> p >> q;

  cout << dp(n, p, q);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}