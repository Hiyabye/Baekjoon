#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, f; cin >> n >> f;
  vector<pair<double, int>> c(n);
  for (int i=0; i<n; i++) {
    double x, v; cin >> x >> v;
    c[i] = {(f-x)/v, i+1};
  }
  sort(c.begin(), c.end());

  cout << c[0].second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}