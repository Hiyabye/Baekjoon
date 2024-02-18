#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b, x, y; cin >> a >> b >> x >> y;

  cout << min(abs(b-a), abs(min(a, b)-min(x, y))+abs(max(a, b)-max(x, y)));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}