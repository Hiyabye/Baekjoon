#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  cout << count(s.begin(), s.end(), 'I') * 1
       + count(s.begin(), s.end(), 'V') * 5
       + count(s.begin(), s.end(), 'X') * 10
       + count(s.begin(), s.end(), 'L') * 50
       + count(s.begin(), s.end(), 'C') * 100
       + count(s.begin(), s.end(), 'D') * 500
       + count(s.begin(), s.end(), 'M') * 1000
       << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  while (t--) solve();
  return 0;
}