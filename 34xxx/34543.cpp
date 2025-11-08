#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int w; cin >> w;

  cout << max(0, n * 10 + (n >= 3) * 20 + (n >= 5) * 50 - (w > 1000) * 15);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}