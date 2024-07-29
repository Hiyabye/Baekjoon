#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  sort(s.begin(), s.end());

  cout << s[3] << s[2] << s[4] << s[1] << s[5] << s[0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}