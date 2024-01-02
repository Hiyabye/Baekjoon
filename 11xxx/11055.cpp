#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }

  vector<int> dp(n, 0);
  for (int i=0; i<n; i++) {
    dp[i] = a[i];
    for (int j=0; j<i; j++) {
      if (a[j] < a[i]) {
        dp[i] = max(dp[i], dp[j] + a[i]);
      }
    }
  }

  cout << *max_element(dp.begin(), dp.end()) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}