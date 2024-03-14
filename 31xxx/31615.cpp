#include <iostream>
using namespace std;

void solve(void) {
  int a; cin >> a;
  int b; cin >> b;

  int ans = 0, sum = a + b;
  while (sum) {
    sum /= 10;
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