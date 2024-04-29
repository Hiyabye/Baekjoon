#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    vector<int> t(3);
    for (int i=0; i<3; i++) cin >> t[i];
    if (t[0] == -1 && t[1] == -1 && t[2] == -1) continue;
    if (t[0] == -1) t[0] = 1e9;
    if (t[1] == -1) t[1] = 1e9;
    if (t[2] == -1) t[2] = 1e9;
    if (t[0] <= t[1] && t[1] <= t[2]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}