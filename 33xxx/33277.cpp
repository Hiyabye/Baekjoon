#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  int ans = m * 60 * 24 / n;
  cout << setw(2) << setfill('0') << ans / 60 << ':' << setw(2) << setfill('0') << ans % 60;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}