#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 0, b = 0;
  for (int i=0; n; i++) {
    if (i & 1) a += (n+1)/2;
    else b += (n+1)/2;
    n >>= 1;
  }
  cout << a << " " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}