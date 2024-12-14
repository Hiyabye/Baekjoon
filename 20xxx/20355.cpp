#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int ans = 0;
  for (int i=0; i<26; i++) {
    string t;
    for (char c : s) t += (char)('a' + (c - 'a' + i) % 26);
    if (t.find('i') == string::npos) ans++;
  }
  cout << (ans > 0 ? to_string(ans) : "impossible");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}