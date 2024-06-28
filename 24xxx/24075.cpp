#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  cout << max(a+b, a-b) << "\n";
  cout << min(a+b, a-b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}