#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  long long ans = 0;
  for (long long i=1, j=0; i<=n; i=j+1) {
    j = n / (n / i);
    ans += (n / i) * (j - i + 1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}