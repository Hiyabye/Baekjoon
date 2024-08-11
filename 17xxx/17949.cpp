#include <cctype>
#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) {
  return isdigit(c) ? c - '0' : c - 'a' + 10;
}

inline long long calc(const string &s) {
  long long ret = 0;
  for (char c : s) {
    ret = ret * 16 + c2i(c);
  }
  return ret;
}

void solve(void) {
  string s; cin >> s;
  int n; cin >> n;

  int idx = 0;
  while (n--) {
    string t; cin >> t;
    if (t == "char") cout << calc(s.substr(idx, 2)) << " ", idx += 2;
    else if (t == "int") cout << calc(s.substr(idx, 8)) << " ", idx += 8;
    else if (t == "long_long") cout << calc(s.substr(idx, 16)) << " ", idx += 16;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}