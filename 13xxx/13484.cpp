#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;
  int n; cin >> n;

  int ans = x;
  while (n--) {
    int p; cin >> p;
    ans += x - p;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}