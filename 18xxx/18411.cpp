#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  cout << a + b + c - min({a, b, c});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}