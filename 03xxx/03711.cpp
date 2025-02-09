#include <iostream>
#include <set>
#include <vector>
using namespace std;

inline bool check(int g, const vector<int> &v, int m) {
  set<int> s;
  for (int i=0; i<g; i++) {
    if (s.find(v[i] % m) != s.end()) return false;
    s.insert(v[i] % m);
  }
  return true;
}

void solve(void) {
  int g; cin >> g;
  vector<int> v(g);
  for (int i=0; i<g; i++) cin >> v[i];

  int ans = 1;
  while (!check(g, v, ans)) ans++;
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}