#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<char> > v(n, vector<char>(n));
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    for (int j=0; j<n; j++) {
      v[i][j] = s[j];
    }
  }

  pair<int, int> ans = make_pair(0, 0);
  for (int i=0; i<n; i++) {
    pair<int, int> cnt = make_pair(0, 0);
    for (int j=0; j<n; j++) {
      cnt.first = (v[i][j] == '.') ? cnt.first + 1 : 0;
      cnt.second = (v[j][i] == '.') ? cnt.second + 1 : 0;
      if (cnt.first == 2) ans.first++;
      if (cnt.second == 2) ans.second++;
    }
  }
  cout << ans.first << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}