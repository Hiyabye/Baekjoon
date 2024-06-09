#include <cmath>
#include <iostream>
using namespace std;

bool solve(void) {
  int a, b; cin >> a >> b;
  int c, d; cin >> c >> d;

  return (abs(a - c) + abs(b - d)) & 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "white" : "black");
  return 0;
}