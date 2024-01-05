#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << 2*(n+1) << " " << 3*(n+1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}