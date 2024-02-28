#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;
  
  vector<int> cnt(26, 0);
  for (char c : s) cnt[c-'a']++;

  pair<char, int> ans = make_pair('a', 0);
  for (int i=0; i<26; i++) {
    if (cnt[i] > ans.second) {
      ans.first = 'a' + i;
      ans.second = cnt[i];
    }
  }
  cout << ans.first << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}