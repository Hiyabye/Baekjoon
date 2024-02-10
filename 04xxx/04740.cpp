#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  if (s == "***") return false;

  reverse(s.begin(), s.end());
  cout << s << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}