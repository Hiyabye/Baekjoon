#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  cout << (n > 7 ? n-7 : m+7);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}