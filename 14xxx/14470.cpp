#include <iostream>
using namespace std;

void solve(void) {
  int a; cin >> a;
  int b; cin >> b;
  int c; cin >> c;
  int d; cin >> d;
  int e; cin >> e;

  cout << (a > 0 ? (b-a) * e : -a*c + d + b*e);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}