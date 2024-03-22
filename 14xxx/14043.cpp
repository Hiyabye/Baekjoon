#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  string t; cin >> t;

  vector<int> cnt(26, 0);
  for (int i=0; i<s.length(); i++) {
    cnt[s[i]-'a']++;
    if (t[i] == '*') continue;
    cnt[t[i]-'a']--;
  }

  int ans = count(t.begin(), t.end(), '*');
  for (int i=0; i<26; i++) {
    if (cnt[i] > 0) ans -= cnt[i];
  }
  return ans == 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "A" : "N");
  return 0;
}