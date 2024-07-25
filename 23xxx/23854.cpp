#include <iostream>
using namespace std;

void solve(void) {
  int a; cin >> a;
  int b; cin >> b;

  if (a % 3 != b % 3) {
    cout << -1;
  } else {
    cout << a / 3 << " " << a % 3 << " " << b / 3;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}