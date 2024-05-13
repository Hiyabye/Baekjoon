#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

vector<vector<long long>> precompute(int n) {
  vector<vector<long long>> ret(n+1, vector<long long>(n+1, 0));
  for (int i=0; i<=n; i++) {
    ret[i][0] = ret[i][i] = 1;
    for (int j=1; j<i; j++) {
      ret[i][j] = (ret[i-1][j] + ret[i-1][j-1]) % MOD;
    }
  }
  return ret;
}

long long power(long long base, long long exp, long long mod) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return ret;
}

void solve(const vector<vector<long long>> &c) {
  int n, k; cin >> n >> k;

  vector<long long> ans(51, 0); ans[0] = n;
  for (int i=1; i<=k; i++) {
    ans[i] = power(n+1, i+1, MOD) - 1;
    for (int j=0; j<=i-1; j++) {
      ans[i] = (ans[i] - c[i+1][j] * ans[j] % MOD + MOD) % MOD;
    }
    ans[i] = ans[i] * power(c[i+1][i], MOD-2, MOD) % MOD;
  }
  cout << ans[k];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<vector<long long>> c = precompute(51);
  solve(c);
  return 0;
}