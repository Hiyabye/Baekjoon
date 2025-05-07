#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i];

  vector<int> v(n);
  for (int i=0; i<n; i++) {
    v[i] = b[i] - a[i];
  }
  sort(v.begin(), v.end());

  cout << max(0, v[k-1]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}