#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  long long d = 0;
  for (int i=0; i<n; i++) {
    d += (i & 1 ? 1 : -1) * a[i];
  }
  cout << (n == 3 && d < 0 ? -1 : abs(d));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}