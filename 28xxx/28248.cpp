#include <iostream>
using namespace std;

void solve(void) {
  int p; cin >> p;
  int c; cin >> c;

  cout << 50*p - 10*c + (p > c ? 500 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}