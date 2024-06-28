#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  string s; cin >> s;
  string t = s;

  cout << (next_permutation(s.begin(), s.end()) ? s : t) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}