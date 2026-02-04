#include <iostream>
#include <string>
using namespace std;

long long p10[16], dp[16];

inline void precompute(void) {
  p10[0] = 1;
  for (int i=1; i<=15; i++) {
    p10[i] = p10[i-1] * 10;
  }

  dp[1] = 45;
  for (int i=2; i<=15; i++) {
    dp[i] = 10 * dp[i-1] + 45 * p10[i-1];
  }
}

inline long long f(long long n) {
  if (n <= 0) return 0;
  string s = to_string(n);
  int len = s.length(), d = s[0] - '0';

  long long ret = 0;
  for (int i=0; i<d; i++) {
    ret += i * p10[len-1];
    if (len > 1) ret += dp[len-1];
  }

  if (len == 1) ret += d;
  else ret += d * (stoll(s.substr(1)) + 1) + f(stoll(s.substr(1)));
  return ret;
}

void solve(void) {
  long long a, b; cin >> a >> b;

  cout << f(b) - f(a-1) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  precompute();

  int t; cin >> t;
  while (t--) solve();
  return 0;
}