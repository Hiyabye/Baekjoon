#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  cout << (a == b + c || b == c + a || c == a + b ? 1 : (a == b * c || b == c * a || c == a * b ? 2 : 3));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}