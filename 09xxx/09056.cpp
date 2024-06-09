#include <iostream>
#include <set>
#include <string>
using namespace std;

bool solve(void) {
  string a, b; cin >> a >> b;

  set<char> s(b.begin(), b.end());
  for (char c : a) {
    if (s.find(c) == s.end()) return false;
    s.erase(c);
  }
  return s.empty();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}