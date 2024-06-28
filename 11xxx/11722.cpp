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

  vector<int> dp(n, 1);
  for (int i=0; i<n; i++) {
    for (int j=i; j<n; j++) {
      if (a[i] > a[j]) {
        dp[j] = max(dp[j], dp[i] + 1);
      }
    }
  }

  cout << *max_element(dp.begin(), dp.end()) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}