#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  if (n == m) {
    cout << 1 + (n-2) * (n-2);
  } else {
    cout << min(n-1, m-1) * min(n-1, m-1);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}