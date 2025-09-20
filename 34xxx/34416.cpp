#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int k; cin >> k;
  int m; cin >> m;

  while (m--) {
    int a, b; cin >> a >> b;
    if (k == a) k = b;
    else if (k == b) k = a;
  }
  cout << k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}