#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  double n;
  cin >> n;
  string s;
  getline(cin, s);

  for (int i=0; i<s.length(); i++) {
    if (s[i] == '@') n *= 3;
    if (s[i] == '%') n += 5;
    if (s[i] == '#') n -= 7;
  }
  cout << fixed << setprecision(2) << n << "\n";
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