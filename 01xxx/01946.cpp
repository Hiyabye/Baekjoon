#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<pair<int, int> > a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i].first >> a[i].second;
  }

  sort(a.begin(), a.end());

  int ans = 1, cur = 0;
  for (int i=1; i<n; i++) {
    if (a[i].second >= a[cur].second) continue;
    cur = i;
    ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}