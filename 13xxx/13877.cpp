#include <iostream>
#include <string>
using namespace std;

inline int octal(const string &s) {
  for (char c : s) if (c > '7') return 0;
  return stoi(s, nullptr, 8);
}

inline int dec(const string &s) {
  return stoi(s);
}

inline int hexa(const string &s) {
  return stoi(s, nullptr, 16);
}

void solve(void) {
  int idx; string s; cin >> idx >> s;

  cout << idx << " " << octal(s) << " " << dec(s) << " " << hexa(s) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}