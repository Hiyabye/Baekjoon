#include <iostream>
#include <set>
#include <string>
using namespace std; 

inline bool same(const string &s) {
  for (int i=1; i<s.length(); i++) {
    if (s[i] != s[i-1]) return false;
  }
  return true;
}

inline bool check(int k) {
  string s = to_string(k);
  if (same(s)) return true;
  for (int i=1; i<s.length(); i++) {
    if (s[i] <= s[i-1]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;

  set<int> ans;
  while (n--) {
    int k; cin >> k;
    if (check(k)) ans.insert(k);
  }

  if (ans.empty()) cout << "NERASTA";
  else cout << *ans.begin();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}