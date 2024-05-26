#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  int q; cin >> q;

  unordered_map<int, int> mp;
  while (q--) {
    int a, b; cin >> a >> b;
    if (a == 1) {
      int c = max({mp[b], mp[b+1], mp[b+2], mp[b+3]}) + 1;
      mp[b] = mp[b+1] = mp[b+2] = mp[b+3] = c;
    } else if (a == 2) {
      mp[b] += 4;
    } else {
      cout << mp[b] << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}