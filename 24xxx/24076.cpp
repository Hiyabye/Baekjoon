#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (i & 1) ans += (s[i] != 'O');
    else ans += (s[i] != 'I');
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}