#include <iostream>
#include <vector>
using namespace std;

vector<long long> dp(56);

long long cal(long long x) {
  long long ret = x & 1;
  for (int i=54; i>0; i--) {
    if (x & (1LL<<i)) {
      ret += dp[i-1] + x - (1LL<<i) + 1;
      x -= 1LL<<i;
    }
  }
  return ret;
}

void solve(void) {
  long long a, b; cin >> a >> b;

  dp[0] = 1;
  for (int i=1; i<=55; i++) {
    dp[i] = dp[i-1] * 2 + (1LL<<i);
  }
  cout << cal(b) - cal(a-1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}