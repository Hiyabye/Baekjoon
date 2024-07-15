#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int op; cin >> op;
  int n, a, b, c; cin >> n >> a >> b >> c;

  cout << (op == 1 ? max(0, a+b+c-2*n) : min({a, b, c}));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}