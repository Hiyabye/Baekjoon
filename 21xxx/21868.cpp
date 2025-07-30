#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  int c, d; cin >> c >> d;
  int x0; cin >> x0;

  cout << c * x0 + d << "\n";
  if (c > 0) cout << a << " " << b * c;
  else if (c < 0) cout << a << " " << -b * c;
  else cout << "0 0";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}