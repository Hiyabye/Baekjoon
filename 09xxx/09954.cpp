#include <iostream>
#include <string>
using namespace std;

inline string shift(string s, int n) {
  for (char &c : s) {
    if ('A' <= c && c <= 'Z') c = (c - 'A' + n + 26) % 26 + 'A';
    if ('a' <= c && c <= 'z') c = (c - 'a' + n + 26) % 26 + 'a';
  }
  return s;
}

bool solve(void) {
  string s; getline(cin, s);
  if (s == "#") return false;

  cout << shift(s.substr(0, s.length()-1), 'A' - s.back()) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}