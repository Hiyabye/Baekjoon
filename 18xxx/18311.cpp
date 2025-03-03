#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n; long long k; cin >> n >> k;
  vector<long long> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  for (int i=0; i<n; i++) {
    if (k < v[i]) return i+1;
    k -= v[i];
  }
  for (int i=n-1; i>=0; i--) {
    if (k < v[i]) return i+1;
    k -= v[i];
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}