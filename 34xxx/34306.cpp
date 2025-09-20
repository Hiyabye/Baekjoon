#include <iostream>
using namespace std;

void solve(void) {
  int w; cin >> w;
  int n; cin >> n;

  cout << 5280 * w / n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}