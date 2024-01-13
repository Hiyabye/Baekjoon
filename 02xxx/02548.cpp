#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int mn = v[0], mx = v[0];
  for (int i=1; i<n; i++) {
    if (v[i] < mn) mn = v[i];
    if (v[i] > mx) mx = v[i];
  }

  int ans = mn, val = 1e9;
  for (int i=mn; i<=mx; i++) {
    int sum = 0;
    for (int j=0; j<n; j++) sum += abs(v[j] - i);
    if (sum < val) ans = i, val = sum;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}