#include <iostream>
#include <string>
using namespace std;

char solve(void) {
  string s; cin >> s;
  for (char c='A'; c<='Z'; c++) {
    if (s.find(c) == string::npos) return c;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  cout << solve();
  return 0;
}