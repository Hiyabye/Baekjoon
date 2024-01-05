#include <iostream>
using namespace std;

void solve(void) {
  int b; cin >> b;

  cout << b / 11 * 10;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}