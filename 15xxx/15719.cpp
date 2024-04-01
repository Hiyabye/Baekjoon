#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  long long ans = (1 - n) * n / 2;
  while (n--) {
    int x; cin >> x;
    ans += x;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}