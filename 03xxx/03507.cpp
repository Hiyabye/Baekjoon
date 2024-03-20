#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << (n > 198 ? 0 : 199-n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}