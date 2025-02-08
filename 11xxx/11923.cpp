#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, c; cin >> n >> c;
  vector<int> w(n);
  for (int i=0; i<n; i++) cin >> w[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    int sum = 0, cnt = 0;
    for (int j=i; j<n; j++) {
      if (sum + w[j] > c) continue;
      cnt++;
      if (sum + w[j] == c) break;
      sum += w[j];
    }
    ans = max(ans, cnt);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}