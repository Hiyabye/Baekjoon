#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int k; cin >> k;

  vector<int> x(7, 0), y(7, 0);
  for (int i=1; i<7; i++) {
    int a, b; cin >> a >> b;
    x[i] = x[i-1] + (a == 1 ? b : a == 2 ? -b : 0);
    y[i] = y[i-1] + (a == 3 ? -b : a == 4 ? b : 0);
  }

  int ans = 0;
  for (int i=1; i<7; i++) ans += x[i] * y[i-1] - x[i-1] * y[i];
  cout << abs(ans * k / 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}