#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, d, n; cin >> a >> b >> c >> d >> n;

  cout << max(0, 4*n-(a+b+c+d));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}