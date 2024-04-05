#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  reverse(s.begin(), s.end());
  cout << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}