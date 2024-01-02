#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  vector<int> a(26, 0);
  for (int i=0; i<s.length(); i++) a[s[i]-'A']++;

  int odd = -1;
  for (int i=0; i<26; i++) {
    if (a[i] & 1) {
      if (odd != -1) {
        cout << "I'm Sorry Hansoo";
        return;
      }
      odd = i;
    }
  }

  string ans = "";
  for (int i=0; i<26; i++) {
    for (int j=0; j<a[i]/2; j++) {
      ans += (char)('A'+i);
    }
  }
  if (odd != -1) ans += (char)('A'+odd);
  for (int i=25; i>=0; i--) {
    for (int j=0; j<a[i]/2; j++) {
      ans += (char)('A'+i);
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}