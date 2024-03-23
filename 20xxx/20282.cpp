#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int c; cin >> c;

  int ans = 0, sum = 0;
  while (c--) {
    int v; cin >> v;
    sum += v;
    ans = max(ans, sum);
  }
  cout << ans + 100;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}