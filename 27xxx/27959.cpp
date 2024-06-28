#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  cout << (100 * n >= m ? "Yes" : "No");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}