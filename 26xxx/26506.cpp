#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];
  sort(s.begin(), s.end());

  int ans = 1e9;
  for (int i=0; i<n/2; i++) {
    ans = min(ans, s[i] + s[n-i-1]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}