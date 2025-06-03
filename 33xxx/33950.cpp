#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  for (int i=0; i<s.length(); i++) {
    if (i+1 < s.length() && s[i] == 'P' && s[i+1] == 'O') cout << "PHO", i++;
    else cout << s[i];
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}