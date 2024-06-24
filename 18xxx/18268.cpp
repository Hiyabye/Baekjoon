#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int k, n; cin >> k >> n;
  vector<vector<bool>> v(n, vector<bool>(n, true));
  for (int i=0; i<n; i++) v[i][i] = false;
  while (k--) {
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i], a[i]--;
    for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) v[a[j]][a[i]] = false;
  }

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) ans += v[i][j];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}