#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  long long c; cin >> c;
  int m; cin >> m;
  set<long long> p;
  while (m--) {
    long long x; cin >> x;
    p.insert(x);
  }

  for (long long x : p) {
    if (c % x || p.find(c / x) == p.end()) continue;
    cout << x << " " << c / x;
    return;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}