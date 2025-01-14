#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;
  string t; cin >> t;

  int a = 0, b = 0;
  for (int i=0; i<n; i++) {
    if (s[i] == 'R' && t[i] == 'P') b++;
    if (s[i] == 'S' && t[i] == 'R') b++;
    if (s[i] == 'S' && t[i] == 'P') a++;
  }
  cout << a << " " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}