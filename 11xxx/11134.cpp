#include <iostream>
using namespace std;

void solve(void) {
  int n, c; cin >> n >> c;

  cout << (n+c-1)/c << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}