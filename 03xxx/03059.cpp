#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;

  vector<bool> a(26, false);
  for (int i=0; i<s.length(); i++) a[s[i]-'A'] = true;

  int ans = 0;
  for (int i=0; i<26; i++) if (!a[i]) ans += 'A'+i;
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}