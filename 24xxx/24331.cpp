#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  set<int> a;
  while (n--) {
    int x; cin >> x;
    a.insert(x);
  }

  set<int> b;
  while (m--) {
    int x; cin >> x;
    if (a.find(x) != a.end()) b.insert(x);
  }

  cout << b.size() << "\n";
  for (int x : b) {
    cout << x << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}