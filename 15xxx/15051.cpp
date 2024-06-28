#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a1, a2, a3; cin >> a1 >> a2 >> a3;

  cout << min({2*a2+4*a3, 2*a1+2*a3, 4*a1+2*a2});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}