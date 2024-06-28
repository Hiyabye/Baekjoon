#include <iostream>
using namespace std;

void solve(void) {
  int a; cin >> a;
  int b; cin >> b;

  if (a >= 20) a -= 24;
  cout << b - a;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}