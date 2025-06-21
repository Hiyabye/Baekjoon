#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];

  int ans = 0, key = 0;
  for (int i=1; i<=n; i++) {
    if (a[i] == i) ans++;
    else key = i;
  }

  if (key) cout << ans;
  else cout << n;
  cout << "\n";
  for (int i=1; i<n; i++) {
    if (a[i] != i) cout << a[i];
    else if (key) cout << key;
    else cout << n;
    cout << " ";
  }
  if (a[n] != n) cout << a[n];
  else if (key) cout << key;
  else cout << 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}