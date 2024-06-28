#include <iostream>
using namespace std;

void solve(void) {
  int a, b, x; cin >> a >> b >> x;

  cout << a*(x-1)+b << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}