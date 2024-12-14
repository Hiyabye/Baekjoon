#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=n-2; i>=0; i--) a[i] += a[i+1];

  for (int i=n-1; i>=0; i--) {
    if (a[i] >= m) return i+1;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}