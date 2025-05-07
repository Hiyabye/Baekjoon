#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> e(m);
  for (int i=0; i<m; i++) cin >> e[i];

  set<int> s;
  for (int i=1; i<=n; i++) s.insert(i);
  for (int i=m-1; i>=0; i--) {
    if (s.find(e[i]) == s.end()) continue;
    cout << e[i] << "\n";
    s.erase(e[i]);
  }
  for (int x : s) cout << x << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}