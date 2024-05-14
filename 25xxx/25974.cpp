#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

vector<vector<long long>> precompute(int p) {
  vector<vector<long long>> ret(p+1, vector<long long>(p+1, 0));
  for (int i=0; i<=p; i++) {
    ret[i][0] = ret[i][i] = 1;
    for (int j=1; j<=i-1; j++) {
      ret[i][j] = (ret[i-1][j] + ret[i-1][j-1]) % MOD;
    }
  }
  return ret;
}

long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % MOD;
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

void solve(const vector<vector<long long>> &c) {
  int n, p; cin >> n >> p;

  vector<long long> ans(p+1, 0); ans[0] = n;
  for (int i=1; i<=p; i++) {
    ans[i] = power(n+1, i+1) - 1;
    for (int j=0; j<=i-1; j++) {
      ans[i] = (ans[i] - c[i+1][j] * ans[j] % MOD + MOD) % MOD;
    }
    ans[i] = ans[i] * power(c[i+1][i], MOD-2) % MOD;
  }
  cout << ans[p];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<vector<long long>> c = precompute(1001);
  solve(c);
  return 0;
}