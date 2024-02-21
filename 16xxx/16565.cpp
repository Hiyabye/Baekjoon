#include <iostream>
#include <vector>
#define MOD 10007
using namespace std;

vector<vector<int>> precompute(void) {
  vector<vector<int>> c(53, vector<int>(53, 1));
  for (int n=1; n<=52; n++) {
    for (int k=1; k<n; k++) {
      c[n][k] = (c[n-1][k-1] + c[n-1][k]) % MOD;
    }
  }
  return c;
}

void solve(const vector<vector<int>>& c) {
  int n; cin >> n;

  int ans = 0;
  for (int i=4; i<=n; i+=4) {
    if ((i/4) & 1) ans += c[13][i/4] * c[52-i][n-i];
    else           ans -= c[13][i/4] * c[52-i][n-i];
    ans %= MOD;
  }
  cout << (ans + MOD) % MOD;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<vector<int>> c = precompute();
  solve(c);
  return 0;
}