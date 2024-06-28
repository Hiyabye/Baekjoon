#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << (char)((n+8)%12+'A') << (n+6)%10;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}