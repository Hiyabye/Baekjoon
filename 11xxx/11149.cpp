#include <iostream>
#include <sstream>
#include <string>
using namespace std;

inline char calc(const string &t) {
  int sum = 0;
  for (char c : t) {
    sum = (sum + c - 'a') % 27;
  }
  return sum == 26 ? ' ' : 'a' + sum;
}

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s); string t;

  string ans = "";
  while (ss >> t) {
    ans += calc(t);
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  while (t--) solve();
  return 0;
}