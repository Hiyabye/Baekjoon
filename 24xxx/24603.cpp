#include <iostream>
#include <vector>
using namespace std;

void solve(int x, int y) {
  double a; cin >> a;

  cout << (int)(a / x * y) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, x, y; cin >> n >> x >> y;
  while (n--) solve(x, y);
  return 0;
}