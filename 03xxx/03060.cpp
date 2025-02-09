#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

inline vector<int> calc(const vector<int> &v) {
  vector<int> ret(6);
  for (int i=0; i<6; i++) {
    ret[i] = v[i] + v[(i+1)%6] + v[(i+3)%6] + v[(i+5)%6];
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<int> v(6);
  for (int i=0; i<6; i++) cin >> v[i];

  int ans = 1;
  while (accumulate(v.begin(), v.end(), 0) <= n) ans++, v = calc(v);
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}