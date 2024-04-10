#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  int ans = 0;
  while (a != b) {
    int c = max(a, b) - min(a, b), d = min(a, b);
    a = c, b = d;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}