#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  double r; cin >> r;

  int ans = 1, sum = round(r * 100);
  while (sum % 36000) ans++, sum += round(r * 100);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}