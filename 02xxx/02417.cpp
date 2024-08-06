#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  long long ans = sqrt(n);
  if (ans * ans < n) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}