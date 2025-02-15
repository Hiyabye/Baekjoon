#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k, m; cin >> n >> k >> m;

  vector<int> a(n+1, -1);
  for (int i=0; i<k; i++) {
    int g; cin >> g;
    while (g--) {
      int x; cin >> x;
      a[x] = i;
    }
  }

  vector<int> b(n+1);
  for (int i=1; i<=n; i++) {
    cin >> b[i];
  }

  vector<int> c(k, 0);
  for (int i=1; i<=n; i++) {
    if (~a[i]) c[a[i]] += b[i];
  }

  int ans = 0;
  for (int i=0; i<k; i++) {
    ans += (c[i]+m-1) / m;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}