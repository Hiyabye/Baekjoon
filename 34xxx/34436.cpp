#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  vector<int> cnt(26, 0);
  if ('a' <= s[0] && s[0] <= 'z') cnt[s[0]-'a']++;
  for (int i=1; i<s.length(); i++) {
    if (s[i-1] == ' ') cnt[s[i]-'a']++;
  }

  int mx = 0;
  for (int i=0; i<26; i++) mx = max(mx, cnt[i]);
  for (int i=0; i<26; i++) {
    if (cnt[i] == mx) {
      cout << (char)('a' + i) << "\n";
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n; cin.ignore();
  while (n--) solve();
  return 0;
}