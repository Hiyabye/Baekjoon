#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int t; cin >> t;
  vector<int> l(t), r(t);
  for (int i=0; i<t; i++) cin >> l[i] >> r[i];

  int ans = (l[0] && l[0] == r[0]);
  for (int i=1; i<t; i++) {
    if (l[i]) ans += (l[i] == l[i-1]);
    if (r[i]) ans += (r[i] == r[i-1]);
    if (l[i] && r[i]) ans += (l[i] == r[i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}