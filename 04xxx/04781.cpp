#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; double m; cin >> n >> m;
  if (n == 0 && m == 0) return false;

  vector<int> dp(100*m+10001, 0);
  while (n--) {
    int c; double p; cin >> c >> p;
    for (int i=100*p; i<=100*m; i++) {
      dp[i] = max(dp[i], dp[i-100*p]+c);
    }
  }
  cout << *max_element(dp.begin()+100*m, dp.end()) << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}