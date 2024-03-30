#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string n; cin >> n;
  reverse(n.begin(), n.end());

  string ans = n.substr(0, 1);
  for (int i=1; i<n.length(); i++) {
    if (!(i % 3)) ans += ',';
    ans += n[i];
  }
  reverse(ans.begin(), ans.end());

  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}