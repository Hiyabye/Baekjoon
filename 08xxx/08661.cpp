#include <iostream>
using namespace std;

void solve(void) {
  int x, k, a; cin >> x >> k >> a;
  
  cout << (x % (k + a) < k);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}