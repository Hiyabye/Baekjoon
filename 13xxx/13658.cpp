#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  char d; string n; cin >> d >> n;
  if (d == '0' && n == "0") return false;

  string s = "";
  for (char c : n) {
    if (c != d) s += c;
  }
  while (s.size() > 0 && s[0] == '0') s.erase(0, 1);
  if (s.size() == 0) s = "0";

  cout << s << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}