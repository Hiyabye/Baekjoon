#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, a, b; cin >> n >> a >> b;

  int ans = 0;
  while (a != b) {
    a = (a+1)/2;
    b = (b+1)/2;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}