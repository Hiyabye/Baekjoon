#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n; cin >> n;

  vector<string> ans;
  for (int i=0; i<n; i++) {
    string t; cin >> t;
    bool flag = true;
    for (int j=0; j<9; j++) {
      if (s[j] == '*') continue;
      if (s[j] != t[j]) {
        flag = false;
        break;
      }
    }
    if (flag) ans.push_back(t);
  }

  cout << ans.size() << "\n";
  for (string t : ans) cout << t << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}