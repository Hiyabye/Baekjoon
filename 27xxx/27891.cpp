#include <iostream>
#include <string>
using namespace std;

inline void shift(string &s) {
  for (char &c : s) {
    c = (c - 'a' + 1) % 26 + 'a';
  }
}

string solve(void) {
  string s; cin >> s;

  for (int i=0; i<26; i++) {
    shift(s);
    if (s == "branksomeh") return "BHA";
    if (s == "stjohnsbur") return "SJA";
    if (s == "northlondo") return "NLCS";
    if (s == "koreainter") return "KIS";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}