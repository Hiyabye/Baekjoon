#include <iostream>
using namespace std;

void solve(void) {
  int n, m, t; cin >> n >> m >> t;

  int a = 0, b = 1e9;
  for (int i=0; i<=t/n; i++) {
    int j = (t-i*n)/m, k = t-i*n-j*m;
    if (k < b) a = i+j, b = k;
    else if (k == b && i+j > a) a = i+j;
  }
  cout << a << " " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}