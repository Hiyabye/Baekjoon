#include <iostream>
using namespace std;

void solve(void) {
  int k, w, m; cin >> k >> w >> m;

  cout << (w-k+m-1)/m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}