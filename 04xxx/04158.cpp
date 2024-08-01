#include <iostream>
#include <unordered_set>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  if (n == 0 && m == 0) return false;

  unordered_set<int> s;
  while (n--) {
    int x; cin >> x;
    s.insert(x);
  }

  int ans = 0;
  while (m--) {
    int x; cin >> x;
    if (s.find(x) != s.end()) ans++;
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}