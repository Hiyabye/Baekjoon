#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(3));
  for (int i=0; i<n; i++) for (int j=0; j<3; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=1; i<=3; i++) {
    int cur = i, score = 0;
    for (int j=0; j<n; j++) {
      if (cur == v[j][0]) cur = v[j][1];
      else if (cur == v[j][1]) cur = v[j][0];
      if (cur == v[j][2]) score++;
    }
    ans = max(ans, score);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}