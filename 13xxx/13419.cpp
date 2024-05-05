#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  string a, b;
  for (int i=0; i<s.length(); i++) {
    if (i & 1) a += s[i];
    else b += s[i];
  }

  if (s.length() & 1) {
    cout << b << a << "\n" << a << b << "\n";
  } else {
    cout << b << "\n" << a << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}