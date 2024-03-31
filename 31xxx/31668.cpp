#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;
  int k; cin >> k;

  cout << m / n * k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}