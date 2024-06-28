#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, h; cin >> n >> h;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0;
  for (int i=0; i<n; i++) ans += (h >= a[i]);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}