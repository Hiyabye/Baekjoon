#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n0, m0; cin >> n0 >> m0;

  int ans = 0;
  for (int i=0; i<5; i++) {
    int n1, m1; cin >> n1 >> m1;
    ans = max(ans, (n1-n0) + 10*(m1-m0) + 1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}