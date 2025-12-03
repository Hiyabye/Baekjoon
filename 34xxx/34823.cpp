#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int y, c, p; cin >> y >> c >> p;

  cout << min({y, c / 2, p});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}