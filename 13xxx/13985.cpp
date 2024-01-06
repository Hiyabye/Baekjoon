#include <iostream>
#include <string>
using namespace std;

inline int num(char c) {
  return c - '0';
}

void solve(void) {
  string s; getline(cin, s);

  cout << (num(s[0]) + num(s[4]) == num(s[8]) ? "YES" : "NO");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}