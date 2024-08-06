#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  while (m--) {
    int d; cin >> d;
    int idx = distance(a.begin(), lower_bound(a.begin(), a.end(), d));
    cout << (idx == n || a[idx] != d ? -1 : idx) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}