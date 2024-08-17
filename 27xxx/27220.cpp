#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int a; cin >> a;
  int b; cin >> b;

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      int x = abs(i-n/2) + abs(j-n/2);
      cout << (a <= x && x <= b ? "*" : ".");
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}