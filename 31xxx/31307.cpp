#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, lph; cin >> n >> lph;
  vector<int> loc(n);
  for (int i=0; i<n; i++) cin >> loc[i];
  sort(loc.begin(), loc.end());

  int ans = 0, cur = 0;
  for (int i=0; i<n; i++) {
    if (cur + loc[i] > lph * 5) break;
    cur += loc[i];
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}