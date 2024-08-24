#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> memo;

inline int dp(int n) {
  if (n <= 0) return 0;
  if (n <= 3) return (1<<(n-1));
  if (memo.find(n) != memo.end()) return memo[n];
  return memo[n] = dp(n-1) + dp(n-2) + dp(n-3);
}

void solve(void) {
  int n; cin >> n;

  cout << dp(n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}