#include <iostream>
using namespace std;

void solve(void) {
  int a, b, n; cin >> a >> b >> n;

  for (int i=0; i<n; i++) {
    a %= b;
    a *= 10;
  }
  cout << a / b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}