#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int k; cin >> k;

  while (k--) {
    int a, b; cin >> a >> b;
    cout << min({a-1, n-a, b-1, n-b}) % 3 + 1 << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}