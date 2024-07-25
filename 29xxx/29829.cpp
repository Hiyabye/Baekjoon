#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, d; cin >> a >> b >> c >> d;

  if (a != d && b != c) {
    cout << "EI";
  } else {
    cout << "JAH\n" << a << " " << b << " " << b << " " << a;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}