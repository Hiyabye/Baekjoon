#include <iostream>
using namespace std;

void solve(void) {
  int a; cin >> a;

  for (int i=1; i<=a; i++) {
    if (30 % (i+1)) continue;
    cout << i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}