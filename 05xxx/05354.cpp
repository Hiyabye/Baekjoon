#include <iostream>
using namespace std;

void solve(void) {
  int j; cin >> j;

  for (int i=0; i<j; i++) {
    for (int k=0; k<j; k++) {
      cout << (i == 0 || i == j-1 || k == 0 || k == j-1 ? "#" : "J");
    }
    cout << "\n";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}