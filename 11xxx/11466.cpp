#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double h, w; cin >> h >> w;
  if (h > w) swap(h, w);

  cout << fixed << setprecision(4) << ((3*h < w) ? h : (3*h > 2*w ? h/2 : w/3));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}