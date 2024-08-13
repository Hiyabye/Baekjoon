#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  cout << a / 10;
  if (a % 10 == b / 10) cout << a % 10 << "'";
  else cout << a % 10 << b / 10;
  if (b % 10 == c / 10) cout << b % 10 << "'";
  else cout << b % 10 << c / 10;
  cout << c % 10;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}