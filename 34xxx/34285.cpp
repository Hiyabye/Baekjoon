#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
using namespace std;

inline int calc(const pair<int, int> &a, const pair<int, int> &b) {
  return abs(a.first - b.first) + abs(a.second - b.second);
}

void solve(void) {
  int n; cin >> n;
  unordered_map<string, pair<int, int>> mp;
  for (int i=0; i<n; i++) {
    string s; int x, y; cin >> s >> x >> y;
    mp[s] = {x, y};
  }

  int ans = 0;
  string prev; cin >> prev;
  while (--n) {
    string cur; cin >> cur;
    ans += calc(mp[prev], mp[cur]);
    prev = cur;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}