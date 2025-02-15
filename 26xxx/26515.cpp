#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s); int t;

  string ans = "";
  while (ss >> t) {
    if ('A' <= t && t <= 'Z') ans += (char)(t + 32);
    else if ('a' <= t && t <= 'z') ans += (char)t;
    else ans += '-';
  }
  cout << ans.substr(1) << ans[0] << "ay\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n; cin.ignore();
  while (n--) solve();
  return 0;
}