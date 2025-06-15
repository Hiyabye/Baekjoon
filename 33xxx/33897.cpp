#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int cnt = 1, mx = 1, cur = 1;
  for (int i=1; i<n; i++) {
    if (v[i-1] > v[i]) cnt++, cur = 0;
    mx = max(mx, ++cur);
  }
  cout << cnt << " " << mx;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}