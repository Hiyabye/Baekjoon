#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  set<int> a, b;
  while (n--) {
    int x; cin >> x;
    a.insert(x);
  }
  while (m--) {
    int x; cin >> x;
    b.insert(x);
  }

  for (int x : a) {
    if (b.find(x) != b.end()) cout << x << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}