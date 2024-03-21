#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  cout << (b % a ? "NIE" : "TAK") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}