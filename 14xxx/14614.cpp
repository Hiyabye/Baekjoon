#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int a, b; string c; cin >> a >> b >> c;

  cout << (c.back() - '0' & 1 ? a ^ b : a);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}