#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  cout << min(a/2, b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}