#include <iostream>
#include <string>
using namespace std;

inline bool check(const string &s) {
  for (char c : s) {
    if (c < '0' || c > '9') return false;
  }
  return true;
}

string solve(void) {
  string s; getline(cin, s);

  while (s.front() == ' ') s.erase(s.begin());
  while (s.back() == ' ') s.pop_back();
  if (s.empty()) return "invalid input";
  while (s.front() == '0') s.erase(s.begin());
  if (s.empty()) return "0";

  return check(s) ? s : "invalid input";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  while (t--) cout << solve() << "\n";
  return 0;
}