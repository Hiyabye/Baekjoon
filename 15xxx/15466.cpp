#include <iostream>
#include <unordered_set>
using namespace std;

void solve(void) {
  int m, n; cin >> m >> n;
  unordered_set<int> a, b;
  while (m--) {
    int x; cin >> x;
    a.insert(x);
  }
  while (n--) {
    int x; cin >> x;
    b.insert(x);
  }

  unordered_set<int> c, d;
  for (auto& x : a) {
    if (b.find(x) != b.end()) c.insert(x);
    d.insert(x);
  }
  for (auto& x : b) d.insert(x);

  cout << (c.size() * 2 > d.size()) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}