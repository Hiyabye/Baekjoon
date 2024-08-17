#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, p; cin >> n >> p;

  int ans = n-1 + min(p-1, n-p);
  while (n--) {
    int a; cin >> a;
    ans += a;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}