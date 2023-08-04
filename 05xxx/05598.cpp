#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  for (int i=0; i<s.size(); i++) {
    s[i] = (s[i] - 'A' + 23) % 26 + 'A';
  }
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}