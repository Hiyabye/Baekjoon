#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> h(n);
  for (int i=0; i<n; i++) cin >> h[i];

  long long ans = h[0] + h[n-1] + n * 2;
  for (int i=0; i<n; i++) ans += h[i] * 2;
  for (int i=1; i<n; i++) ans += abs(h[i] - h[i-1]);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}