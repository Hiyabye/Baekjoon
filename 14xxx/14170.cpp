#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  while (q--) {
    int a, b; cin >> a >> b;
    cout << distance(lower_bound(v.begin(), v.end(), a), upper_bound(v.begin(), v.end(), b)) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}