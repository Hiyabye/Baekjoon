#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans = max(ans, a[i] + i);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}