#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  vector<int> sum(10);
  cin >> sum[0];
  for (int i=1; i<10; i++) {
    int n; cin >> n;
    sum[i] = sum[i-1] + n;
  }

  int ans = 0;
  for (int i=0; i<10; i++) {
    if (abs(100 - ans) >= abs(100 - sum[i])) ans = sum[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}