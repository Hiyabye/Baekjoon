#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double ab, ac, bc; cin >> ab >> ac >> bc;

  double a = ab * ac / bc;
  double b = ab * bc / ac;
  double c = ac * bc / ab;

  cout << fixed << setprecision(7) << a << "\n" << b << "\n" << c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}