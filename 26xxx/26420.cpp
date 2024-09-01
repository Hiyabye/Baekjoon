#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, m; cin >> n >> m;
  vector<double> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end(), greater<double>());

  double ans = 0;
  for (int i=0; i<m-1; i++) {
    ans += a[i];
  }
  ans += ((n-m) & 1) ? (a[(n+m-3)/2] + a[(n+m-1)/2]) / 2 : a[(n+m-2)/2];
  
  cout << "Case #" << idx << ": " << fixed << setprecision(7) << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}