#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  string t = "";
  for (char c : s) {
    if ('A' <= c && c <= 'Z') {
      t += '_';
      t += c - 'A' + 'a';
    } else {
      t += c;
    }
  }
  if (t[0] == '_') t = t.substr(1);

  cout << t << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}