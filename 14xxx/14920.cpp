#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int cnt = 1;
  while (n != 1) {
    n = n & 1 ? 3*n+1 : n/2;
    cnt++;
  }
  cout << cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}