#include <iostream>
using namespace std;

int right(int a, int b, int c) {
  return a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b;
}

int equil(int a, int b, int c) {
  return a == b && b == c;
}

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  cout << right(a, b, c) + equil(a, b, c) * 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}