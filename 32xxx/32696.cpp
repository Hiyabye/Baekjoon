#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  if (a) {
    if (a == 1) cout << "x";
    else if (a == -1) cout << "-x";
    else cout << a << "x";
  }
  if (b) {
    if (a && b > 0) cout << "+";
    cout << b;
  } else if (!a) {
    cout << 0;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}