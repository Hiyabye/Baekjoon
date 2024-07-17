#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

inline string calc(string s) {
  int n = s.length();
  if (n == 1) return s;
  reverse(s.begin(), s.end());
  return s.substr(n-1, 1) + s.substr(1, n-2) + s.substr(0, 1);
}

bool solve(void) {
  string s; getline(cin, s);
  if (s == "#") return false;

  stringstream ss(s); string t;
  while (ss >> t) {
    cout << calc(t) << " ";
  }
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}