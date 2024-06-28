#include <iostream>
#include <algorithm>
using namespace std;

void solve(void) {
  int a, b, c, d, p;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> p;

  cout << min(a*p, b+max(0, p-c)*d);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}