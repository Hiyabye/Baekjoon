#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int c, n; cin >> c >> n;

  vector<int> dp(c+101, 1e9); dp[0] = 0;
  while (n--) {
    int a, b; cin >> a >> b;
    for (int i=b; i<=c+100; i++) {
      dp[i] = min(dp[i], dp[i-b]+a);
    }
  }
  cout << *min_element(dp.begin()+c, dp.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}