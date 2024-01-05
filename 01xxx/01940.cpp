#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int ans = 0, l = 0, r = n-1;
  while (l < r) {
    int sum = v[l] + v[r];
    if (sum == m) ans++, l++, r--;
    else if (sum < m) l++;
    else r--;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}