#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;
  char c; cin >> c;

  while (s.front() != c) {
    for (int i=0; i<s.length(); i++) {
      s[i] = (s[i] - 'a' + 1) % 26 + 'a';
    }
  }
  cout << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}