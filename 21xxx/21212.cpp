#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 1e9;
  for (int i=0; i<n; i++) {
    int a, b; cin >> a >> b;
    ans = min(ans, b / a);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}