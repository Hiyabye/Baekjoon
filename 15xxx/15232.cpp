#include <iostream>
using namespace std;

void solve(void) {
  int r; cin >> r;
  int c; cin >> c;

  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) cout << "*";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}