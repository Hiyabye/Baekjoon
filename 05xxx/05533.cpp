#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(3));
  for (int i=0; i<n; i++) for (int j=0; j<3; j++) cin >> v[i][j];

  vector<int> ans(n, 0);
  for (int i=0; i<3; i++) {
    vector<int> cnt(101, 0);
    for (int j=0; j<n; j++) cnt[v[j][i]]++;
    for (int j=0; j<n; j++) if (cnt[v[j][i]] == 1) ans[j] += v[j][i];
  }

  for (int i=0; i<n; i++) cout << ans[i] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}