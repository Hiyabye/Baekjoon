#include <iostream>
#include <cmath>
using namespace std;

void solve(void) {
  int n; cin >> n;

  if (n == 1) {
    cout << "1";
    return;
  }

  long long ans = n;
  int mx = sqrt(n-1);
  for (int i=1; i<mx; i++) ans += (n-1)/i;
  for (int i=(n-1)/mx; i>=1; i--) ans += i*((n-1)/i-(n-1)/(i+1));
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}