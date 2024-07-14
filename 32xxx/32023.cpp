#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  long long ans = 1e18;
  for (long long h=max(1.0, sqrt(n/2)); h<=sqrt(n*2); h++) {
    long long w = (n+h-1)/h;
    ans = min(ans, h*w-n);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}