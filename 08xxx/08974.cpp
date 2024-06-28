#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  int ans = 0, i = 1, j = 1;
  while (i <= b) {
    if (i >= a) ans += j;
    if (i == j*(j+1)/2) j++;
    i++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}