#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  int ans = 0;
  for (int i=0; i<(int)log10(n); i++) {
    ans += 9 * pow(10, i) * (i+1);
  }
  ans += (n - pow(10, (int)log10(n)) + 1) * ((int)log10(n) + 1);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}