#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;

  vector<int> cnt(26, 0);
  for (char c : s) cnt[c-'a']++;
  sort(cnt.begin(), cnt.end());

  int ans = 0;
  for (int i=0; i<24; i++) ans += cnt[i];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}