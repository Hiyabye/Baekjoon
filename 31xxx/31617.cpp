#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int k; cin >> k;
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int m; cin >> m;
  vector<int> b(m);
  for (int i=0; i<m; i++) cin >> b[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (a[i] + k == b[j]) ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}