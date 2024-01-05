#include <iostream>
using namespace std;

void solve(void) {
  int h, m; cin >> h >> m;

  cout << 60 * (h-9) + m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}