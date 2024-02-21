#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n; cin >> n;
  vector<string> s(n);
  for (int i=0; i<n; i++) cin >> s[i];
  int k; cin >> k;

  vector<int> a(n, 0);
  for (int i=0; i<n; i++) {
    for (char c : s[i]) {
      a[i] = (10 * a[i] + c - '0') % k;
    }
  }

  vector<int> ten(55, 1 % k);
  for (int i=1; i<55; i++) {
    ten[i] = (10 * ten[i-1]) % k;
  }

  vector<vector<long long>> dp(1<<n, vector<long long>(k, 0));
  dp[0][0] = 1;
  for (int mask=0; mask<(1<<n); mask++) {
    for (int i=0; i<n; i++) {
      if (mask & (1<<i)) continue;
      for (int j=0; j<k; j++) {
        dp[mask | (1<<i)][(j * ten[s[i].size()] + a[i]) % k] += dp[mask][j];
      }
    }
  }

  if (!dp[(1<<n)-1][0]) {
    cout << "0/1";
    return;
  }

  long long num = dp[(1<<n)-1][0], den = 1;
  for (int i=1; i<=n; i++) den *= i;
  long long g = gcd(num, den);
  cout << num / g << "/" << den / g;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}