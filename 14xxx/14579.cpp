#include <iostream>
#define MOD 14579
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  int ans = 1;
  for (int i=a; i<=b; i++) {
    ans = ans * (i*(i+1)/2 % MOD) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}