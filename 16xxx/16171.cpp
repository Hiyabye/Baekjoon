#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  string s; cin >> s;
  string t = "";
  for (int i=0; i<s.length(); i++) {
    if (s[i] >= '0' && s[i] <= '9') continue;
    t += s[i];
  }

  string k; cin >> k;
  for (int i=0; i<t.length()-k.length()+1; i++) {
    if (t.substr(i, k.length()) == k) {
      cout << "1";
      return;
    }
  }
  cout << "0";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}