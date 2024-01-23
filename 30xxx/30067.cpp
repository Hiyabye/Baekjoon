#include <iostream>
using namespace std;

void solve(void) {
  int ans = 0;
  for (int i=0; i<10; i++) {
    int x; cin >> x;
    ans += x;
  }
  cout << ans / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}