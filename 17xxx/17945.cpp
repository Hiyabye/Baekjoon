#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  if (a*a == b) cout << -a;
  else cout << -a-sqrt(a*a-b) << " " << -a+sqrt(a*a-b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}