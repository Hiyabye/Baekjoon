#include <iostream>
using namespace std;

void solve(void) {
  int x;
  cin >> x;
  
  int ans = 0;
  for (int i=0; i<=6; i++) {
    if (x & (1<<i)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}