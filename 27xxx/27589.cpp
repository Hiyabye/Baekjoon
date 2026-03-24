#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  unordered_map<string, int> mp;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    mp[s] = i;
  }

  while (q--) {
    string s, t; cin >> s >> t;
    cout << abs(mp[s] - mp[t]) - 1 << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
