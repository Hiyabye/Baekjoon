#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, d; cin >> a >> b >> c >> d;
  if (a > b) swap(a, b);
  if (c > d) swap(c, d);

  cout << max(b, d) - min(a, c) + 1 - max(0, c-b-1) - max(0, a-d-1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}