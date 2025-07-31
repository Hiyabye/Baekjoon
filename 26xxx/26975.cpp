#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> c(n);
  for (int i=0; i<n; i++) cin >> c[i];
  sort(c.begin(), c.end());

  long long mx = 0, idx = -1;
  for (int i=0; i<n; i++) {
    if (c[i] * (n-i) > mx) {
      mx = c[i] * (n-i);
      idx = i;
    }
  }
  cout << mx << " " << c[idx];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}