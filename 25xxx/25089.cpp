#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  vector<vector<int>> v(3, vector<int>(4));
  for (int i=0; i<3; i++) for (int j=0; j<4; j++) cin >> v[i][j];

  vector<int> ans(4);
  int left = 1e6;
  for (int i=0; i<4; i++) {
    ans[i] = min({v[0][i], v[1][i], v[2][i], left});
    left -= ans[i];
  }

  cout << "Case #" << idx << ": ";
  if (left) cout << "IMPOSSIBLE";
  else for (int i=0; i<4; i++) cout << ans[i] << " ";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}