#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  cout << s[0];
  for (int i=1; i<s.length(); i++) {
    if (s[i] == s[i-1]) continue;
    cout << s[i];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}