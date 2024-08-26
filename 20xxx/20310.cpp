#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n = s.length();

  int a = count(s.begin(), s.end(), '1') / 2;
  for (int i=0; i<n && a; i++) {
    if (s[i] != '1') continue;
    s[i] = '.'; a--;
  }

  int b = count(s.begin(), s.end(), '0') / 2;
  for (int i=n-1; i>=0 && b; i--) {
    if (s[i] != '0') continue;
    s[i] = '.'; b--;
  }

  for (int i=0; i<n; i++) {
    if (s[i] == '.') continue;
    cout << s[i];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}