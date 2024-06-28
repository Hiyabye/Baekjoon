#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int p, m;
  cin >> p >> m;

  int ans = 0, x;
  vector<bool> a(m, false);
  for (int i=0; i<p; i++) {
    cin >> x;
    if (a[x-1]) ans++;
    else a[x-1] = true;
  }

  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k;
  cin >> k;
  while (k--) {
    solve();
  }
  return 0;
}