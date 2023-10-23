#include <iostream>
#include <iomanip>
using namespace std;

void solve(void) {
  double n; cin >> n;

  cout << "$" << fixed << setprecision(2) << n * 0.8 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}