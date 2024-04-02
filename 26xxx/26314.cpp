#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int ans = 0;
  for (char c : "aeiou") {
    ans += count(s.begin(), s.end(), c) * 2;
  }
  cout << s << "\n" << (ans > s.length()) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}