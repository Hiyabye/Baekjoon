#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int t; cin >> t;
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int m; cin >> m;
  vector<int> b(m);
  for (int i=0; i<m; i++) cin >> b[i];

  vector<int> c, d;
  for (int i=0; i<n; i++) {
    int sum = 0;
    for (int j=i; j<n; j++) {
      sum += a[j];
      c.push_back(sum);
    }
  }
  for (int i=0; i<m; i++) {
    int sum = 0;
    for (int j=i; j<m; j++) {
      sum += b[j];
      d.push_back(sum);
    }
  }
  sort(d.begin(), d.end());

  long long ans = 0;
  for (int e : c) {
    ans += upper_bound(d.begin(), d.end(), t-e) - lower_bound(d.begin(), d.end(), t-e);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}