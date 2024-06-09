#include <iostream>
using namespace std;

void solve(void) {
  int n1, n2; cin >> n1 >> n2;

  cout << (n2 - n1) * (n2 - n1 + 1) / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}