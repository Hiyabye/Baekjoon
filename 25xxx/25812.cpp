#include <iostream>
using namespace std;

void solve(void) {
  int n, r; cin >> n >> r;

  int ans = 0;
  while (n--) {
    int x; cin >> x;
    ans += (x < r ? 1 : x > r ? -1 : 0);
  }
  cout << (ans > 0 ? 1 : ans < 0 ? 2 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}