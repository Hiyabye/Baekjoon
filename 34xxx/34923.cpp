#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

inline int calc(const string &s) {
  return (stoi(s.substr(0, 2)) % 12) * 60 + stoi(s.substr(3, 2));
}

void solve(void) {
  string s; cin >> s;
  string t; cin >> t;

  int a = (calc(t) - calc(s) + 720) % 720;
  int b = (calc(s) - calc(t) + 720) % 720;

  cout << min(a, b) * 6;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}