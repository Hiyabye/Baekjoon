#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  cout << min((max(a, b)+1)/2, min(a, b)) << " " << max((max(a, b)+1)/2, min(a, b));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}