#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> x(n+1, 0);
  for (int i=1; i<=n; i++) cin >> x[i];
  for (int i=1; i<=n; i++) x[i] += x[i-1];

  long long ans = 0;
  for (int i=1; i<=n; i++) {
    ans += (x[i] - x[i-1]) * (x[n] - x[i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}