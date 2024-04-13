#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n), cnt(100001, 0);
  for (int i=0; i<n; i++) cin >> a[i];

  int l = 0, r = 0, ans = 0;
  while (l < n && r < n) {
    while (r < n && cnt[a[r]] < k) cnt[a[r++]]++;
    ans = max(ans, r-l);
    cnt[a[l++]]--;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}