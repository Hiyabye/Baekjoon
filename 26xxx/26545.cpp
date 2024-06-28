#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int sum = 0;
  int x; while (n--) cin >> x, sum += x;
  cout << sum;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}