#include <iostream>
using namespace std;

void solve(void) {
  int ax, ay, az; cin >> ax >> ay >> az;
  int cx, cy, cz; cin >> cx >> cy >> cz;

  cout << cx - az << " " << cy / ay << " " << cz - ax;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}