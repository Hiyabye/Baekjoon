#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> k(n), a(n), b(n);
  for (int i=0; i<n; i++) cin >> k[i];
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  for (int i=0; i<n; i++) {
    cout << (k[i] + a[i] + b[i]) - max({k[i], a[i], b[i]}) - min({k[i], a[i], b[i]}) << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}