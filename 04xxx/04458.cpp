#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  string s;
  getline(cin, s);

  if (s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
  cout << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    solve();
  }
  return 0;
}