#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> x(n), y(m);
  for (int i=0; i<n; i++) cin >> x[i];
  for (int i=0; i<m; i++) cin >> y[i];

  int ans = 0, cur = 0;
  while (ans < m && cur < n-1) {
    cur += y[ans++];
    cur += x[min(n-1, cur)];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}