#include <iostream>
using namespace std;

void solve(void) {
  int n, m, a; cin >> n >> m >> a;

  int x; cin >> x;
  while (x != m/2+1) {
    a = (n - m / 2 + a + x - 2) % n + 1;
    cout << a << "\n";
    cin >> x;
  }
  cout << 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}