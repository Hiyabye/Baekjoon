#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  for (int i=0; i<m; i++) {
    int a = n / m + n % m;
    cout << a << " "; n -= a;
  }
  cout << "\n" << n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}