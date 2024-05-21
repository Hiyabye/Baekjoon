#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;

  vector<pair<int, char>> v(26);
  for (int i=0; i<26; i++) v[i] = {0, 'a' + i};
  for (char c : s) v[c - 'a'].first++;
  sort(v.begin(), v.end(), greater<pair<int, char>>());

  int ans = 0;
  for (int i=2; i<26; i++) ans += v[i].first;
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}