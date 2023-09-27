#include <iostream>
using namespace std;

void solve(void) {
  int ans = 0;

  int x; cin >> x;
  while (x != -1) {
    ans += x;
    cin >> x;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}