#include <iostream>
#include <map>
#define MOD 1000000007
using namespace std;

map<long long, long long> dp;

long long f(long long n) {
  if (dp.find(n) != dp.end()) return dp[n];

  dp[n] = (f(n/2+1) * f(n-n/2) + f(n/2) * f(n-n/2-1)) % MOD;
  return dp[n];
}

void solve(void) {
  long long n; cin >> n;

  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 1;
  cout << f(n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}