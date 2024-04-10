#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  double r, s;

  while (cin >> r >> s) {
    cout << (int)(sqrt(r*(s+0.16)/0.067)+0.5) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}