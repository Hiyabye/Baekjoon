#include <iostream>
using namespace std;

void solve(void) {
  long long n, m; cin >> n >> m;

  long long ans = 1;
  for (long long i=2; i<=n && i<=m; i++) {
    ans = ans * i % m;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}