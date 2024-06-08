#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string rev(string s) {
  reverse(s.begin(), s.end());
  return s;
}

string tail(string s) {
  return s.substr(1);
}

bool solve(void) {
  string s; cin >> s;
  int n = s.length();

  string t = s.substr(0, (n+2)/3);
  string a = t + rev(t) + t;
  string b = t + tail(rev(t)) + t;
  string c = t + rev(t) + tail(t);
  string d = t + tail(rev(t)) + tail(t);

  return s == a || s == b || s == c || s == d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}