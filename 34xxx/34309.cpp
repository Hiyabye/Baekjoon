#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  char a, b; cin >> a >> b;

  int ans = 0;
  while (--n) {
    char c, d; cin >> c >> d;
    ans += abs(a-c) + abs(b-d);
    a = c; b = d;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}