#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int m, n, p; cin >> m >> n >> p;
  vector<vector<int>> s(m, vector<int>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> s[i][j];

  int ans = 0;
  for (int i=0; i<n; i++) {
    int step = 0;
    for (int j=0; j<m; j++) step = max(step, s[j][i] - s[p-1][i]);
    ans += step;
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}