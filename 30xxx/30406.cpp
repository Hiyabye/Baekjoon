#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

inline int calc(unordered_map<int, int> &mp, int a, int b) {
  int c = min(mp[a], mp[b]);
  mp[a] -= c; mp[b] -= c;
  return c * (a ^ b);
}

void solve(void) {
  int n; cin >> n;
  unordered_map<int, int> mp;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    mp[x]++;
  }

  cout << calc(mp, 0, 3) + calc(mp, 1, 2) +
          calc(mp, 0, 2) + calc(mp, 1, 3) +
          calc(mp, 0, 1) + calc(mp, 2, 3);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}