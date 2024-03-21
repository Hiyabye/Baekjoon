#include <iostream>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;

  cout << (m < k ? n*m : n*(k+m/k-1));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}