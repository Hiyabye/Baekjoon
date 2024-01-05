#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  if (s == "*") return false;

  int n = s.length();
  vector<bool> v(26, false);
  for (int i=0; i<n; i++) {
    if (s[i] == ' ') continue;
    v[s[i]-'a'] = true;
  }

  bool ans = true;
  for (int i=0; i<26; i++) {
    if (!v[i]) ans = false;
  }
  cout << (ans ? "Y" : "N") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}