#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<int> b(n-1, 0);
  for (int i=1; i<=n-1; i++) {
    for (int j=0; j<i; j++) {
      if (a[j] <= a[i]) b[i-1]++;
    }
  }
  cout << accumulate(b.begin(), b.end(), 0) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}