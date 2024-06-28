#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (n <= i*(i-1)/2) break;
    if (n*2%i == 0 && (n*2/i-i+1)%2 == 0) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}