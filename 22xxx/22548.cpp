#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << (int)ceil(log(n) / log(3));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}