#include <iostream>
#include <string>
using namespace std;

inline bool vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

inline string calc(const string &s) {
  bool flag = false;
  for (int i=0; i<s.length(); i++) {
    if (vowel(s[i])) flag = true;
    else if (flag) return s.substr(0, i);
  }
  return "";
}

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  if (calc(a) == "" || calc(b) == "") cout << "no such exercise";
  else cout << calc(a) << calc(b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}