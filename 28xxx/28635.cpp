#include <iostream>
using namespace std;

void solve(void) {
  int m; cin >> m;
  int a; cin >> a;
  int b; cin >> b;

  cout << b - a + (b < a ? m : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}