#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<int, vector<int>> mp;
  while (--n) {
    int a, b; cin >> a >> b;
    mp[a].push_back(b); mp[b].push_back(a);
  }

  int q; cin >> q;
  while (q--) {
    int t, k; cin >> t >> k;
    if (t == 1) cout << (mp[k].size() > 1 ? "yes" : "no") << "\n";
    else if (t == 2) cout << "yes\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}