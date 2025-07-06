#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int ans = 0;
  for (int i=1; i<n; i++) {
    if (s[i-1] == '5' && s[i] == '5') ans += 2;
    else if (s[i-1] == '2' && s[i] == '2') ans += 2;
    else if (s[i-1] == ']' && s[i] == '[') continue;
    else ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}