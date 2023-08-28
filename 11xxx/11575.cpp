#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  string s; cin >> s;

  for (int i=0; i<s.length(); i++) {
    cout << (char)((a*(s[i]-'A')+b)%26+'A');
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}