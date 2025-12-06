#include <iostream>
using namespace std;

void solve(void) {
  long long x, y, p, a, b; cin >> x >> y >> p >> a >> b;

  cout << p*x + (y-1)*b*x - a*x*(x-1)/2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}