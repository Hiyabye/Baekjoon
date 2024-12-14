#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int a, b; cin >> a >> b;

  if (n >= a + b) {
    int ans = 0;
    for (int i=n-1; i>=n-a-b; i--) {
      ans |= 1 << i;
    }
    cout << ans;
  } else {
    int ans = (1 << n) - 1;
    for (int i=0; i<a+b-n; i++) {
      ans ^= 1 << i;
    }
    cout << ans;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}