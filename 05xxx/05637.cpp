#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string ans = "", s;
  while (getline(cin, s)) {
    string t = "";
    for (char c : s) {
      if ('a' <= c && c <= 'z') t += c;
      else if ('A' <= c && c <= 'Z') t += (char)(c - 'A' + 'a');
      else if (c == '-') t += c;
      else if (t.length() > ans.length()) ans = t, t = "";
      else t = "";
    }
  }

  for (char c : ans) {
    if (c == '-') cout << '-';
    else if ('A' <= c && c <= 'Z') cout << (char)(c - 'A' + 'a');
    else cout << c;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}