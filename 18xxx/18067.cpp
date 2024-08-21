#include <iostream>
using namespace std;

void solve(void) {
  int a, b, n; cin >> a >> b >> n;

  int ans = 1;
  for (int i=b, j=b; i<n; ans++) {
    j += b - a;
    ans++;
    i = j;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}