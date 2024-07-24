#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  if (s == "0") return false;

  string ans = "";
  char cur = s[0]; int cnt = 0;

  for (char c : s) {
    if (c == cur) {
      cnt++;
    } else {
      ans += to_string(cnt) + cur;
      cur = c; cnt = 1;
    }
  }
  if (cnt) ans += to_string(cnt) + cur;

  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}