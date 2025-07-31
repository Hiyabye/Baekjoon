#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  string t; cin >> t;

  int n = s.length(), m = t.length();
  vector<pair<char, int>> k(n);
  for (int i=0; i<n; i++) k[i] = {s[i], i};
  sort(k.begin(), k.end());

  vector<vector<char>> ans(n, vector<char>(m/n));
  for (int i=0; i<n; i++) for (int j=0; j<m/n; j++) {
    ans[k[i].second][j] = t[i*m/n+j];
  }

  for (int i=0; i<m/n; i++) for (int j=0; j<n; j++) {
    cout << ans[j][i];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}