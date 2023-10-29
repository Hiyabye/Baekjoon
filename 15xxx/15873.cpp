#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;

  if (x == 1010) cout << 20;
  else if (x > 109) cout << (x / 100) + (x % 100);
  else if (x % 10 == 0) cout << (x / 10) + 10;
  else cout << (x / 10) + (x % 10);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}