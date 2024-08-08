#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  cout << (n < 2) << " " << (n >= 2) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}