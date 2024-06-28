#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s, t, ans;
  cin >> s;
  cin >> t;

  for (int i=0; i<s.length(); i++) {
    ans += s[i];
    if (ans.length() >= t.length() && ans.substr(ans.length()-t.length()) == t) {
      ans.erase(ans.length()-t.length());
    }
  }
  cout << (ans.length() ? ans : "FRULA");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}