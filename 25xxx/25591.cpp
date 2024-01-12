#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  int a = 100 - n;
  int b = 100 - m;
  int c = n + m - 100;
  int d = a * b;
  int q = d / 100;
  int r = d % 100;
  
  cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << "\n" << c + q << " " << r;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}