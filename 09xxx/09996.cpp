#include <iostream>
#include <regex>
#include <string>
using namespace std;

bool solve(const string &p) {
  string s; cin >> s;

  return regex_match(s, regex("^" + regex_replace(p, regex("\\*"), ".*") + "$"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  string p; cin >> p;
  while (n--) cout << (solve(p) ? "DA" : "NE") << "\n";
  return 0;
}