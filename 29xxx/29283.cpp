#include <iostream>
using namespace std;

void solve(void) {
  long long k; cin >> k;

  long long ans = 0;
  for (long long i=0; i<k; i++) {
    ans += (i / 5 + 1) * 30;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}