#include <iostream>
#include <iomanip>
using namespace std;

void solve(void) {
  double a, b; cin >> a >> b;
  double c = 299792458.0;
  
  cout << fixed << setprecision(10) << (a+b)/(1+a*b/c/c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}