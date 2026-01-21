#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  string t; cin >> t;

  while (t.size() > s.size()) {
    char c = t.back();
    t.pop_back();
    if (c == 'B') reverse(t.begin(), t.end());
  }
  return s == t;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}