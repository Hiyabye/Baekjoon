#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, e; cin >> n >> e;
  vector<int> d(n);
  for (int i=0; i<n; i++) cin >> d[i];
  sort(d.begin(), d.end());

  int ans = 1;
  for (int i=1; i<n; i++) {
    if (d[i] - d[i-1] >= e) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}