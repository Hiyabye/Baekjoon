#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int m; cin >> m;
  set<int> a, b;
  for (int i=0; i<m; i++) {
    int x; cin >> x;
    a.insert(x);
  }
  for (int i=0; i<m; i++) {
    int x; cin >> x;
    b.insert(x);
  }

  int ans = 0;
  for (int x : a) {
    if (a.find(x + 500) == a.end()) continue;
    if (b.find(x + 1000) == b.end()) continue;
    if (b.find(x + 1500) == b.end()) continue;
    ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}