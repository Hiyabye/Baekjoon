#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  int d; cin >> d;

  cout << (a * b + 11) / 12 * d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}