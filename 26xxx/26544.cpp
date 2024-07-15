#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int x; cin >> x;
  vector<int> a(x+1, 0), b(x+1, 0);
  for (int i=1; i<=x; i++) cin >> a[i];
  for (int i=1; i<=x; i++) cin >> b[i];

  int ans = accumulate(a.begin(), a.end(), 0) * 2 + b[x];
  for (int i=1; i<=x; i++) ans += abs(b[i] - b[i-1]);
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}