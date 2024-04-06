#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  if (s == "END") return false;

  vector<bool> v(26, false);
  for (char c : s) {
    if (c == ' ') continue;
    if (v[c - 'A']) return true;
    v[c - 'A'] = true;
  }
  cout << s << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}