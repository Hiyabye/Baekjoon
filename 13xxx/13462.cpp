#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  for (int i=0; i<s.length(); i++) {
    if (i+2 < s.length() && s[i] != s[i+1] && s[i+1] != s[i+2] && s[i] != s[i+2]) {
      cout << 'C';
      i += 2;
    } else if (s[i] == 'R') cout << 'S';
    else if (s[i] == 'B') cout << 'K';
    else cout << 'H';
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}