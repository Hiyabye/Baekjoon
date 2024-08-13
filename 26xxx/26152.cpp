#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  vector<int> v(n); v[0] = a[0] - b[0];
  for (int i=1; i<n; i++) {
    v[i] = min(v[i-1], a[i] - b[i]);
  }

  int q; cin >> q;
  while (q--) {
    int w; cin >> w;
    cout << distance(v.begin(), upper_bound(v.begin(), v.end(), w, greater<int>())) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}