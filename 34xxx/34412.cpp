#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;

  if (x < 13) cout << x;
  else cout << x + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}