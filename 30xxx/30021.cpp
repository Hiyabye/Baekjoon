#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  if (n == 1) cout << "YES\n1\n";
  else if (n == 2) cout << "NO\n";
  else {
    cout << "YES\n1 3 2";
    for (int i=4; i<=n; i++) cout << " " << i;
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}