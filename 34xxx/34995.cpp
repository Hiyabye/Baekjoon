#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; string s; cin >> n >> s;
  string a; cin >> a;

  for (char &c : s) {
    if (c == '?') c = '9';
  }

  if (a.length() > n || (a.length() == n && s < a)) cout << -1;
  else cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}