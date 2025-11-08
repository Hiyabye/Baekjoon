#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  for (int i=2; i<=n+1; i++) {
    cout << i * m << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}