#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int a, b, c; cin >> a >> b >> c;

  int d1 = min(n % a, a - n % a);
  int d2 = min(n % b, b - n % b);
  int d3 = min(n % c, c - n % c);

  if (d1 <= d2 && d1 <= d3) {
    cout << a << " ";
    if ((n - d1) % a == 0) cout << n - d1;
    else cout << n + d1;
  } else if (d2 <= d1 && d2 <= d3) {
    cout << b << " ";
    if ((n - d2) % b == 0) cout << n - d2;
    else cout << n + d2;
  } else {
    cout << c << " ";
    if ((n - d3) % c == 0) cout << n - d3;
    else cout << n + d3;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}