#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = n*(n+1);
  for (int i=0; i<2*n-1; i++) {
    int x; cin >> x;
    ans -= x;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}