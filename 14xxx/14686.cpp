#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  int ans = 0;
  for (int i=1; i<n; i++) a[i] += a[i-1];
  for (int i=1; i<n; i++) b[i] += b[i-1];
  for (int i=0; i<n; i++) {
    if (a[i] == b[i]) ans = i+1;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}