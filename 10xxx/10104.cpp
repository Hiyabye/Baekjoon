#include <iostream>
#include <set>
using namespace std;

set<int> calc(const set<int> &cur, int r) {
  set<int> ret; int idx = 0;
  for (int x : cur) {
    if (++idx % r == 0) continue;
    ret.insert(x);
  }
  return ret;
}

void solve(void) {
  int k; cin >> k;
  int m; cin >> m;

  set<int> ans;
  for (int i=1; i<=k; i++) ans.insert(i);

  while (m--) {
    int r; cin >> r;
    ans = calc(ans, r);
  }

  for (int x : ans) {
    cout << x << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}