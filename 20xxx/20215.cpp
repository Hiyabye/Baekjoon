#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int w, h; cin >> w >> h;

  cout << fixed << setprecision(7) << w+h-sqrt(w*w+h*h);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}