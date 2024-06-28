#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << (n / 10000 == 555 ? "YES" : "NO");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}