#include <iostream>
#include <cmath>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  cout << 1 / (1 + pow(10, (b - a) / 400.0));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}