#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  for (int i=0; i<=n/2; i++) {
    if (s[i] == '?' && s[n-i-1] == '?') s[i] = s[n-i-1] = 'a';
    else if (s[i] == '?') s[i] = s[n-i-1];
    else if (s[n-i-1] == '?') s[n-i-1] = s[i];
  }
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}