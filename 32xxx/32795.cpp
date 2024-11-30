#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  for (char c : b) {
    if (a.find(c) == string::npos) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}