#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  long long ans = 1;
  for (int i=2; i<=n; i+=2) {
    ans *= (i-1);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}