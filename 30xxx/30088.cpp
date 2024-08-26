#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<long long> v(n);
  for (int i=0; i<n; i++) {
    int m; cin >> m;
    vector<long long> a(m);
    for (int i=0; i<m; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for (int i=1; i<m; i++) a[i] += a[i-1];
    v[i] = a[m-1];
  }
  sort(v.begin(), v.end());
  for (int i=1; i<n; i++) v[i] += v[i-1];

  cout << accumulate(v.begin(), v.end(), 0LL);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}