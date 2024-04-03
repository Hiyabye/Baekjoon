#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  cout << a << " " << b << " " << c << " " << (a + b + c == 180 ? "Seems OK" : "Check") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}