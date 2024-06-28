#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, n; cin >> a >> b >> c >> n;

  for (int i=0; i<=n/a; i++) {
    for (int j=0; j<=(n-i*a)/b; j++) {
      for (int k=0; k<=(n-i*a-j*b)/c; k++) {
        if (i*a + j*b + k*c == n) {
          cout << 1;
          return;
        }
      }
    }
  }
  cout << 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}