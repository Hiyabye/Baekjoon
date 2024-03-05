#include <iostream>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;

  long long ans = 1;
  for (int i = 1; i <= n; i++) {
    ans = (ans * i) % m;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
