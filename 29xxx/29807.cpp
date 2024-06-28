#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int t; cin >> t;
  vector<int> v(5, 0);
  for (int i=0; i<t; i++) cin >> v[i];

  int ans = 0;
  ans += (v[0] > v[2] ? 508 : 108) * abs(v[0] - v[2]);
  ans += (v[1] > v[3] ? 212 : 305) * abs(v[1] - v[3]);
  ans += v[4] * 707;
  cout << ans * 4763;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}