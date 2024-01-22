#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;

  cout << x << " is " << (x & 1 ? "odd" : "even") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}