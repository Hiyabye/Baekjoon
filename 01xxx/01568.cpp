#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  int ans = 0, i = 1;
  while (n > 0) {
    if (n < i) i = 1;
    n -= i;
    i++;
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