#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int> > v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];
  for (int i=0; i<n; i++) sort(v[i].begin(), v[i].end(), greater<int>());

  vector<int> score(n, 0);
  for (int i=0; i<m; i++) {
    int mx = 0;
    for (int j=0; j<n; j++) mx = max(mx, v[j][i]);
    for (int j=0; j<n; j++) if (v[j][i] == mx) score[j]++;
  }

  int ans = *max_element(score.begin(), score.end());
  for (int i=0; i<n; i++) {
    if (score[i] == ans) cout << i+1 << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}