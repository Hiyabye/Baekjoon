#include <iostream>
#include <unordered_map>
using namespace std;
using uii = unordered_map<int, int>;

inline uii calc(int n) {
  uii ret;
  for (int i=0; i<n; i++) {
    ret[i] = ret[2*(n-1)-i] = i+1;
  }
  return ret;
}

inline bool check(const uii &mp, uii tmp) {
  for (auto &[k, v] : mp) {
    if (v > tmp[k]) return false;
  }
  return true;
}

void solve(void) {
  int m; cin >> m;
  uii mp;
  while (m--) {
    int x; cin >> x;
    mp[x]++;
  }

  int ans = 1;
  while (!check(mp, calc(ans))) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}