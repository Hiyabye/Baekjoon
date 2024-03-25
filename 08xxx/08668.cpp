#include <iostream>
using namespace std;

void solve(void) {
  int x, s; cin >> x >> s;

  cout << (x < 2 * s ? "TAK" : "NIE");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}