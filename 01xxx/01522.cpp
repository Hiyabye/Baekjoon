#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int a = 0;
  for (char c : s) a += (c == 'a');

  int ans = 1e9, b = 0;
  for (int i=0; i<a; i++) b += (s[i] == 'b');
  for (int i=0; i<s.length(); i++) {
    ans = min(ans, b);
    b += (s[(i+a)%s.length()] == 'b') - (s[i] == 'b');
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}