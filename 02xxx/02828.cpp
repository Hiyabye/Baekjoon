#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  int j; cin >> j;

  int ans = 0, cur = 1;
  while (j--) {
    int a; cin >> a;
    if (cur+m-1 < a) {
      ans += a-(cur+m-1);
      cur = a-m+1;
    } else if (cur > a) {
      ans += cur-a;
      cur = a;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}