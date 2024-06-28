#include <iostream>
using namespace std;

void solve(void) {
  int n, x;
  cin >> n;

  int max = -1, min = 100;
  for (int i=0; i<n; i++) {
    cin >> x;
    max = max > x ? max : x;
    min = min < x ? min : x;
  }
  cout << (max - min) * 2 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}