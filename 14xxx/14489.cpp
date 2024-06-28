#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  int c; cin >> c;

  cout << (a+b >= 2*c ? a+b-2*c : a+b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}