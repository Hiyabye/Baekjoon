#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, d; cin >> a >> b >> c >> d;

  cout << max({a*b+c*d, a*c+b*d, a*d+b*c});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}