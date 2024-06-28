#include <iostream>
#include <algorithm>
using namespace std;

void solve(void) {
  int a, b, c, d;
  cin >> a >> b;
  cin >> c >> d;
  cout << min(a+d, b+c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}