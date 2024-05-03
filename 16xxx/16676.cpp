#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 1, cur = 11;
  while (n >= cur) {
    cur = 10 * cur + 1;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}