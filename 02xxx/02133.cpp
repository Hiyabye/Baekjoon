#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> dp(31, 0);

void solve(void) {
  dp[0] = 1;
  for (int i=2; i<=30; i+=2) {
    dp[i] = dp[i-2] * 3;
    for (int j=i-4; j>=0; j-=2) {
      dp[i] += dp[j] * 2;
    }
  }

  cin >> n;
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}