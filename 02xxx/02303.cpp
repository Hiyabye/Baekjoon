#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int> > v(n, vector<int>(5));
  for (int i=0; i<n; i++) for (int j=0; j<5; j++) cin >> v[i][j];

  int mx = 0, ans = 1;
  for (vector<int> &p : v) {
    int cur = 0;
    for (int i=0; i<5; i++) for (int j=i+1; j<5; j++) for (int k=j+1; k<5; k++) {
      cur = max(cur, (p[i] + p[j] + p[k]) % 10);
    }
    if (mx <= cur) {
      mx = cur;
      ans = &p - &v[0] + 1;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}