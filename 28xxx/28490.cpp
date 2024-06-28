#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=0; i<n; i++) {
    int h, w; cin >> h >> w;
    ans = max(ans, h * w);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}