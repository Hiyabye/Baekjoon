#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> t(m);
  for (int i=0; i<m; i++) cin >> t[i];
  vector<vector<int>> s(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> s[i][j];

  int ans = 1, mx = 0;
  for (int i=0; i<n; i++) {
    int cnt = 0;
    for (int j=0; j<m; j++) {
      if (s[i][j] == t[j]) cnt++;
    }
    if (cnt > mx) {
      mx = cnt;
      ans = i + 1;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}