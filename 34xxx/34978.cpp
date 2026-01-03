#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<bool> v(26, false);
  vector<vector<bool>> w(26, vector<bool>(26, true));

  while (n--) {
    char x; int m; cin >> x >> m;
    v[x-'a'] = true;
    while (m--) {
      char y; cin >> y;
      w[x-'a'][y-'a'] = false;
    }
  }

  string s; cin >> s;
  for (int i=1; i<s.length(); i++) {
    if (v[s[i-1]-'a'] && w[s[i-1]-'a'][s[i]-'a']) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "yes" : "no");
  return 0;
}