#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  long long ans = 0;
  for (int i=0; i<n; i++) {
    int a; cin >> a;
    if (a < 0) ans += n-1;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}