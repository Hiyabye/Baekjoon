#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  vector<int> a(3, 0), b(3, 0);

  int n; cin >> n;
  while (n--) {
    int u, v; cin >> u >> v;
    a[--u]++; a[--v]++;
  }
  sort(a.begin(), a.end());

  int m; cin >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    b[--u]++; b[--v]++;
  }
  sort(b.begin(), b.end());

  return a == b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "yes" : "no") << "\n";
  return 0;
}