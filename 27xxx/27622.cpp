#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  set<int> s;
  while (n--) {
    int x; cin >> x;
    if (x > 0) s.insert(x);
    else if (s.find(-x) == s.end()) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}