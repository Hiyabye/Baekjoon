#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  if (n == 1) cout << 0;
  else cout << (n*n+1)/2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}