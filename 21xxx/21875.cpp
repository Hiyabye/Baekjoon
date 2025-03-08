#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  int c = abs(a[0] - b[0]);
  int d = abs(a[1] - b[1]);

  cout << min(c, d) << " " << max(c, d);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}