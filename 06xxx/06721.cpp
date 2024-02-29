#include <iostream>
using namespace std;

int reverse(int x) {
  int ret = 0;
  while (x) {
    ret = ret * 10 + x % 10;
    x /= 10;
  }
  return ret;
}

void solve(void) {
  int a, b; cin >> a >> b;

  cout << reverse(reverse(a) + reverse(b)) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}