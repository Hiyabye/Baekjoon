#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=0; i<n; i++) {
    int h, b, k; cin >> h >> b >> k;
    ans += max(b-h, 0) * k;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}