#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n; cin >> n;

  set<int> s;
  int ans = 0;
  for (int i=0; i<2*n; i++) {
    int x; cin >> x;
    if (s.count(x)) s.erase(x);
    else s.insert(x);
    ans = max(ans, (int)s.size());
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}