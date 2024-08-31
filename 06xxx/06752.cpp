#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int t; cin >> t;
  int c; cin >> c;
  vector<int> v(c);
  for (int i=0; i<c; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int ans = 0, cur = 0;
  for (int i=0; i<c; i++) {
    if (cur + v[i] > t) break;
    cur += v[i];
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