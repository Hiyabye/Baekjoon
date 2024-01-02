#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<bool> v(n+1, true);

  for (int i=2; i<=n; i++) {
    for (int j=i; j<=n; j+=i) {
      v[j] = !v[j];
    }
  }

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (v[i]) ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}