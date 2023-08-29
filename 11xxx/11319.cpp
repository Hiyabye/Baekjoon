#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  string s;
  getline(cin, s);

  int a = 0, b = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] == ' ') continue;
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
      a++;
    } else {
      b++;
    }
  }
  cout << b << " " << a << "\n";
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