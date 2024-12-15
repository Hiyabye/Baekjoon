#include <iostream>
using namespace std;

void solve(void) {
  int n, t; cin >> n >> t;

  int ans = 0;
  while (n--) {
    int a; cin >> a;
    for (int i=0; ; i++) {
      if (t % (a-i) == 0 || t % (a+i) == 0) {
        ans += i;
        break;
      }
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