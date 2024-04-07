#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(n, 0);

  while (m--) {
    for (int i=0; i<n; i++) {
      int x; cin >> x;
      v[i] += x;
    }
  }
  cout << distance(v.begin(), max_element(v.begin(), v.end())) + 1 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}