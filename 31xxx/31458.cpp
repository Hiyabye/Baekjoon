#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int a = s.find_first_not_of('!');
  int b = s.length() - s.find_last_not_of('!') - 1;
  int n = stoi(s.substr(a, s.length() - a - b));

  if (b) n = 1;
  while (a--) n = !n;
  cout << n << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}