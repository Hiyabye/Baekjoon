#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int ans = 0;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    ans += x;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}