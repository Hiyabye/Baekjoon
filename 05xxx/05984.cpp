#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n; cin >> n;

  set<int> s;
  int ans = 1, cur = 0;
  while (s.find(cur) == s.end()) {
    s.insert(cur);
    ans = cur + 1;
    cur = (2 * cur + 1) % n;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}