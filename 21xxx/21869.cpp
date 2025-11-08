#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  if (n == 1) {
    cout << "1\n1 1";
  } else {
    cout << 2*n-2 << "\n";
    for (int i=1; i<=n; i++) cout << "1 " << i << "\n";
    for (int i=2; i<=n-1; i++) cout << n << " " << i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}