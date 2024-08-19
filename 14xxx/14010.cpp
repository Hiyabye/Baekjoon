#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

inline bool check(const string &s, const string &t, int idx) {
  unordered_map<char, char> mp1, mp2;
  for (int i=0; i<t.length(); i++) {
    if (mp1.find(t[i]) == mp1.end()) mp1[t[i]] = s[idx+i];
    else if (mp1[t[i]] != s[idx+i]) return false;
    if (mp2.find(s[idx+i]) == mp2.end()) mp2[s[idx+i]] = t[i];
    else if (mp2[s[idx+i]] != t[i]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  while (n--) {
    string t; cin >> t;
    int ans = -1;
    for (int i=0; i<s.length()-t.length()+1; i++) {
      if (check(s, t, i)) {
        ans = i;
        break;
      }
    }
    cout << (~ans ? to_string(ans) : "-") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}