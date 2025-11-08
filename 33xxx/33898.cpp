#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s, t; cin >> s >> t;

  return (s == "HE" && t == "CP") || (s == "CH" && t == "PE") ||
         (s == "PC" && t == "EH") || (s == "EP" && t == "HC") ||
         (s == "HC" && t == "EP") || (s == "EH" && t == "PC") ||
         (s == "PE" && t == "CH") || (s == "CP" && t == "HE");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}