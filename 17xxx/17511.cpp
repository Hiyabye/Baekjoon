#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  
  set<int> ans;
  for (int i=1; i<=n; i++) ans.insert(i);
  while (m--) {
    int a, b; cin >> a >> b;
    if (ans.count(b)) ans.erase(b);
  }

  cout << ans.size() << "\n";
  for (int x : ans) cout << x << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}