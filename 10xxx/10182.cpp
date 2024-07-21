#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b; double c; cin >> a >> b >> c;

  cout << fixed << setprecision(2) << (a == "H" ? -log10(c) : log10(c) + 14) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}