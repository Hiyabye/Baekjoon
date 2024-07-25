#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int m; cin >> m;
  string s; cin >> s;
  if (m < 12) return false;

  const string t = "+_)(*&^%$#@!./,;{}";
  bool a = false, b = false, c = false, d = false;
  for (char ch : s) {
    if ('a' <= ch && ch <= 'z') a = true;
    else if ('A' <= ch && ch <= 'Z') b = true;
    else if ('0' <= ch && ch <= '9') c = true;
    else if (t.find(ch) != string::npos) d = true;
  }
  return a && b && c && d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << (solve() ? "valid" : "invalid") << "\n";
  return 0;
}