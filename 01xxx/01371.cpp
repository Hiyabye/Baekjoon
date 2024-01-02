#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  vector<int> cnt(26, 0);
  string s;
  while (cin >> s) {
    for (int i=0; i<s.length(); i++) {
      if (s[i] >= 'a' && s[i] <= 'z') cnt[s[i]-'a']++;
      else if (s[i] >= 'A' && s[i] <= 'Z') cnt[s[i]-'A']++;
    }
  }

  int mx = *max_element(cnt.begin(), cnt.end());
  for (int i=0; i<26; i++) {
    if (cnt[i] == mx) cout << (char)(i+'a');
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}