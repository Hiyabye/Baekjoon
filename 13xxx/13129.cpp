#include <iostream>
using namespace std;

void solve(void) {
  int a, b, n; cin >> a >> b >> n;

  for (int i=1; i<=n; i++) {
    cout << a * n + b * i << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}