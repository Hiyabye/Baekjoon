#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  int c, d; cin >> c >> d;

  cout << (a + b + c + d - 2) % 4 + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}