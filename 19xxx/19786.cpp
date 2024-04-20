#include <algorithm>
#include <iostream>
using namespace std;

int calc(int a, int c, int r, int g, int b) {
  return a * (r * r + g * g + b * b) + c * min({r, g, b});
}

void solve(void) {
  int a, c; cin >> a >> c;
  int r, g, b; cin >> r >> g >> b;

  int x = calc(a, c, r+1, g, b);
  int y = calc(a, c, r, g+1, b);
  int z = calc(a, c, r, g, b+1);
  
  cout << (x >= y && x >= z ? "RED" : y >= z ? "GREEN" : "BLUE") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}