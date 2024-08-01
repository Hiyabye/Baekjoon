#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  int m; cin >> m;

  unordered_map<int, int> mp;
  while (m--) {
    int op; cin >> op;
    if (op == 1) {
      int x, w; cin >> x >> w;
      mp[w] = x;
    } else if (op == 2) {
      int w; cin >> w;
      cout << mp[w] << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}