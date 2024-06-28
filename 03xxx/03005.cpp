#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;
  vector<string> v(r);
  for (int i=0; i<r; i++) cin >> v[i];

  vector<string> ans;
  for (int i=0; i<r; i++) {
    string s = "";
    for (int j=0; j<c; j++) {
      if (v[i][j] == '#') {
        if (s.length() >= 2) ans.push_back(s);
        s = "";
      } else s += v[i][j];
    }
    if (s.length() >= 2) ans.push_back(s);
  }
  for (int i=0; i<c; i++) {
    string s = "";
    for (int j=0; j<r; j++) {
      if (v[j][i] == '#') {
        if (s.length() >= 2) ans.push_back(s);
        s = "";
      } else s += v[j][i];
    }
    if (s.length() >= 2) ans.push_back(s);
  }
  sort(ans.begin(), ans.end());

  cout << ans[0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}