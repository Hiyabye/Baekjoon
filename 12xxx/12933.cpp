#include <iostream>
#include <string>
using namespace std;

inline bool calc(string &s) {
  int idx = 0;
  string ret = "";
  for (int i=0; i<s.length(); i++) {
    if (s[i] == "quack"[idx]) {
      idx = (idx + 1) % 5;
    } else {
      ret += s[i];
    }
  }
  if (s == ret) return false;
  s = ret;
  return idx == 0;
}

void solve(void) {
  string s; cin >> s;

  int ans = 0;
  while (!s.empty()) {
    if (!calc(s)) {
      cout << -1;
      return;
    }
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}