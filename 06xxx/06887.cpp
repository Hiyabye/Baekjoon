#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << "The largest square has side length " << int(sqrt(n)) << ".";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}