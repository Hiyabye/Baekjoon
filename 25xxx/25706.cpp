#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  vector<int> dp(n, 1);
  for (int i=n-1; i>=0; i--) {
    if (i+v[i]+1 >= n) continue;
    dp[i] = dp[i+v[i]+1] + 1;
  }

  for (int x : dp) {
    cout << x << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}