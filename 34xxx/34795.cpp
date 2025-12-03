#include <iostream>
using namespace std;

void solve(void) {
  int m, d; cin >> m >> d;

  cout << (d + m - 1) / m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}