#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, p, c; cin >> a >> p >> c;

  cout << max(a + c, p);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}