#include <iostream>
#include <string>
using namespace std;

inline int calc(const string &n) {
  if (n.length() == 1) return stoi(n);
  return stoi(n.substr(n.length() - 2));
}

char solve(void) {
  string n; cin >> n;
  if (n == "0") return '1';

  return "6248"[calc(n) % 4];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}