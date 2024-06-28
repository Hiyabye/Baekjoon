#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  set<int> s;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    s.insert(x);
  }

  int m; cin >> m;
  vector<bool> ans(m);
  for (int i=0; i<m; i++) {
    int x; cin >> x;
    ans[i] = s.find(x) != s.end();
  }

  for (bool b : ans) cout << b << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}