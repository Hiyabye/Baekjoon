#include <iostream>
using namespace std;

void solve(void) {
  long long l; cin >> l;

  cout << l*(l+1)*(2*l+1)/6 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int p; cin >> p;
  while (p--) solve();
  return 0;
}