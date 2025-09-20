#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  int ans = 1;
  while (n != m) {
    if (n > m) n -= m;
    else       m -= n;
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