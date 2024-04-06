#include <iostream>
using namespace std;

void solve(void) {
  int n, t; cin >> n >> t;

  int ans = 1, del = 1;
  while (--t) {
    ans += del;
    del = (ans == 1 || ans == 2*n) ? -del : del;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}