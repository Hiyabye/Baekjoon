#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, w, h; cin >> n >> w >> h;
  vector<vector<vector<char>>> v(n+1, vector<vector<char>>(h, vector<char>(w)));
  for (int i=0; i<=n; i++) for (int j=0; j<h; j++) for (int k=0; k<w; k++) cin >> v[i][j][k];

  int ans = 1, mx = 0;
  for (int i=0; i<n; i++) {
    int cnt = 0;
    for (int j=0; j<h; j++) for (int k=0; k<w; k++) {
      if (v[i][j][k] == v[n][j][k]) cnt++;
    }
    if (cnt > mx) ans = i+1, mx = cnt;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}