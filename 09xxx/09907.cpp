#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string n; cin >> n;

  cout << "JABCDEFGHIZ"[(2*n[0] + 7*n[1] + 6*n[2] + 5*n[3] + 4*n[4] + 3*n[5] + 2*n[6] - 29*'0') % 11];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}