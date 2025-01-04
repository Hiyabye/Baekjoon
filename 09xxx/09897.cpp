#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
using namespace std;

void solve(void) {
  int l, g, r; cin >> l >> g >> r;
  unordered_map<string, pair<int, int>> mp;
  while (g--) {
    string s; int a0, d; cin >> s >> a0 >> d;
    mp[s] = {a0, d};
  }

  unordered_map<int, bool> on;
  for (int i=1; i<=l; i++) {
    on[i] = false;
  }

  while (r--) {
    string s; cin >> s;
    auto [a0, d] = mp[s];
    for (int i=a0; i<=l; i+=d) {
      on[i] = !on[i];
    }
  }

  int ans = 0;
  for (int i=1; i<=l; i++) {
    if (on[i]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}