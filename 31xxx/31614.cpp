#include <iostream>
using namespace std;

void solve(void) {
  int h; cin >> h;
  int m; cin >> m;

  cout << 60 * h + m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}