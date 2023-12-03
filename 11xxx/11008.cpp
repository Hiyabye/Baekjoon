#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s, p; cin >> s >> p;
  int l1 = s.length(), l2 = p.length();

  int ans = 0;
  for (int i=0; i<l1; i++) {
    if (i < l1-l2+1 && s.substr(i, l2) == p) i += l2-1;
    ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}