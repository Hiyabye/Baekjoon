#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];
  sort(s.begin(), s.end());

  int ans = 1, cur = s[0];
  for (int i=1; i<n; i++) {
    if (s[i] >= 2 * cur) {
      cur = s[i];
      ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}