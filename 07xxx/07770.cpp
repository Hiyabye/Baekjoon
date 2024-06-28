#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int cur = 0, ans = 0;
  while (cur <= n) {
    cur += (ans+1) * (ans+1) + ans * ans;
    ans++;
  }
  cout << ans - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}