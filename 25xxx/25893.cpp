#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  int cnt = (a >= 10) + (b >= 10) + (c >= 10);
  cout << a << " " << b <<  " " << c << "\n";
  cout << (cnt == 0 ? "zilch" : (cnt == 1 ? "double" : (cnt == 2 ? "double-double" : "triple-double"))) << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}