#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int t1, t2; cin >> t1 >> t2;

  cout << min(t1, t2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}