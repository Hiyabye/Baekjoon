#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  int ans = 0;
  while (n != 1) {
    n = (n & 1) ? 3*n+1 : n/2;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}