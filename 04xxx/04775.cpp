#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_set<string> us;
  while (n--) {
    string s; cin >> s;
    us.insert(s);
  }

  int m; cin >> m;
  for (int i=1; i<=m; i++) {
    vector<string> v, ans;
    string s; cin >> s;
    while (s != "-1") {
      v.push_back(s);
      cin >> s;
    }
    for (const string &s : v) {
      if (us.find(s) == us.end()) ans.push_back(s);
    }
    if (ans.empty()) cout << "Email " << i << " is spelled correctly.\n";
    else {
      cout << "Email " << i << " is not spelled correctly.\n";
      for (const string &s : ans) cout << s << "\n";
    }
  }
  cout << "End of Output";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}