#include <iostream>
using namespace std;

void solve(void) {
  int j; cin >> j;
 
  cout << (j-1) * (j-2) * (j-3) / 6;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}