#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  string t; cin >> t;

  for (char c : t) {
    if (s.find(c) == string::npos) cout << c;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}