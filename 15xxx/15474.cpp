#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, a, b, c, d; cin >> n >> a >> b >> c >> d;

  cout << min((n+a-1)/a*b, (n+c-1)/c*d);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}