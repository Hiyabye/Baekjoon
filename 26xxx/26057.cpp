#include <iostream>
using namespace std;

void solve(void) {
  int l; cin >> l;
  int t; cin >> t;

  cout << 2 * t - l;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}