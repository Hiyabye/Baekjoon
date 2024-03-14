#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  char c; cin >> c;

  cout << abs(c - 'I') + 84;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}