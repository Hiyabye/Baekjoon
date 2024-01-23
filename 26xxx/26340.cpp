#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;
  cout << "Data set: " << a << " " << b << " " << c << "\n";
  for (int i=0; i<c; i++) {
    if (a >= b) a /= 2;
    else b /= 2;
  }
  cout << max(a, b) << " " << min(a, b) << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}