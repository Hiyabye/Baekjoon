#include <iostream>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int n; cin >> n;

  long long ans = 1;
  for (int i=1; i<=n; i+=2) {
    ans = (ans * i) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}