#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n = s.length();

  cout << (s[n/2-1] == s[n/2] ? "Do-it" : "Do-it-Not") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}