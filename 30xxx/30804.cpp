#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];

  int ans = 0, l = 0, r = 0;
  vector<int> cur(10, 0);
  while (r < n) {
    cur[s[r++]]++;
    while (10 - count(cur.begin(), cur.end(), 0) > 2) cur[s[l++]]--;
    ans = max(ans, r-l);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}