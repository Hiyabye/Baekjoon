#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  string ans = "rsefaqtdwczxvg";
  for (char c : ans) {
    if (s.back() == c) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}