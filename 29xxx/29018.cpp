#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

bool cmp(char a, char b) {
  int c = a | (isupper(a) << 12) | (isdigit(a) << 24);
  int d = b | (isupper(b) << 12) | (isdigit(b) << 24);
  return c < d;
}

bool solve(void) {
  string s; cin >> s;
  if (s == "#") return false;

  sort(s.begin(), s.end(), cmp);
  cout << s << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}