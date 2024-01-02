#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string a, b;
  cin >> a;
  cin >> b;

  int n = a.length();
  int alpha[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
  vector<int> dp(n*2);
  for (int i=0; i<n; i++) {
    dp[i*2] = alpha[a[i]-'A'];
    dp[i*2+1] = alpha[b[i]-'A'];
  }
  
  for (int i=0; i<n*2-2; i++) {
    for (int j=0; j<n*2-i-1; j++) {
      dp[j] = (dp[j] + dp[j+1]) % 10;
    }
  }
  cout << dp[0] << dp[1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}