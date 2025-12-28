#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int f = n * 9 / 10;
  for (int i=0; i<=n; i++) {
    cout << max(i-f, f-i) << " " << min(i+f, n*2-i-f) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}