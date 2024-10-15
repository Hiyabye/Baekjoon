#include <iostream>
using namespace std;

void solve(void) {
  int r; cin >> r;
  int g; cin >> g;
  int b; cin >> b;

  cout << r * 3 + g * 4 + b * 5;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}