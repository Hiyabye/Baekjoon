#include <iostream>
using namespace std;

void solve(void) {
  int x, y; cin >> x >> y;

  for (int i=x; i<=y; i+=60) {
    cout << "All positions change in year " << i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}