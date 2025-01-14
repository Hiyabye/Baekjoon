#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int a; cin >> a;
  int b; cin >> b;

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if ((i % a == 0) ^ (i % b == 0)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}