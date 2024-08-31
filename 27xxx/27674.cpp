#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  sort(s.begin(), s.end(), greater<char>());

  cout << stoll(s.substr(0, s.length()-1)) + stoll(s.substr(s.length()-1)) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}