#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=1; i<=n-1; i++) {
    if (!(n % i)) ans += i;
  }
  cout << (ans > n ? "Abundant" : ans < n ? "Deficient" : "Perfect") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}