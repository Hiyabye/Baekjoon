#include <iostream>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0, one = 0, two = 0;
  while (n--) {
    int x; cin >> x;
    if (x == 1) one++;
    else if (x == 2) two = (two + two + one) % MOD;
    else ans = (ans + two) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}