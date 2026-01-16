#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string n0, n1; double i0, m1, i1;
  cin >> n0 >> i0 >> n1 >> m1 >> i1;

  if (i0 * m1 > i1 + 1e-9) {
    cout << "Power up, Evolve" << endl;
  } else if (i1 > i0 * m1 + 1e-9) {
    cout << "Evolve, Power up" << endl;
  } else {
    cout << "Whatever" << endl;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}