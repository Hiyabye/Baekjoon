#include <bits/stdc++.h>

using namespace std;

void solve(void) {
  int n;
  cin >> n;

  long long ans = 0;
  for (int i=1; i<=n; i++) {
    ans += i*(n/i);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}