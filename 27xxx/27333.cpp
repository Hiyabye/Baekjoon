#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  for (int i=1; i<n; i++) {
    if (s[i] != s[i-1]) continue;
    s[i] = s[i-1] = s[i] + 'A' - 'a';
  }
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}