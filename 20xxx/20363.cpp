#include <iostream>
#include <algorithm>
using namespace std;

void solve(void) {
  int x, y;
  cin >> x >> y;
  cout << x + y + min(x/10, y/10);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}