#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  cout << 1 + (b - a + (a % 2 == 0) - (b % 2 == 0)) / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}