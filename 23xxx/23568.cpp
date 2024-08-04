#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<int, pair<char, int>> mp;
  for (int i=0; i<n; i++) {
    int a, c; char b; cin >> a >> b >> c;
    mp[a] = {b, c};
  }
  int cur; cin >> cur;

  for (int i=0; i<n; i++) {
    cur += (mp[cur].first == 'L' ? -1 : 1) * mp[cur].second;
  }
  cout << cur;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}