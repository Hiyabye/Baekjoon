#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  while (m--) {
    int a, b; cin >> a >> b;
    cout << upper_bound(v.begin(), v.end(), b) - lower_bound(v.begin(), v.end(), a) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}