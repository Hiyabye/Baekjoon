#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;
  int y; cin >> y;
  int z; cin >> z;

  cout << (x + y <= z);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}