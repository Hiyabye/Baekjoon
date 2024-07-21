#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int j, r; cin >> j >> r;
  vector<int> v(j*r);
  for (int i=0; i<j*r; ++i) cin >> v[i];

  pair<int, int> ans = {0, 0};
  for (int i=0; i<j; i++) {
    int cur = 0;
    for (int k=i; k<j*r; k+=j) cur += v[k];
    ans = max(ans, {cur, i+1});
  }
  cout << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}