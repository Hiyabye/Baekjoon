#include <iostream>
using namespace std;

void solve(void) {
  int c, p; cin >> c >> p;

  cout << c << " " << p << "\n" << c*p-2*(c-1) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}