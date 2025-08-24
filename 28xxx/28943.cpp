#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  for (int i=0; i<n; i++) {
    int k; cin >> k;
    while (k--) { int x; cin >> x; }
  }
  cout << (n == 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}