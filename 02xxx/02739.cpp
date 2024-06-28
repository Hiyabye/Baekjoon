#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=1; i<=9; i++) {
    cout << n << " * " << i << " = " << n * i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}